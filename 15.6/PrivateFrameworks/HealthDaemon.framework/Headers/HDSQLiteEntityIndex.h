// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITEENTITYINDEX_H
#define HDSQLITEENTITYINDEX_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface HDSQLiteEntityIndex : NSObject

@property (readonly, nonatomic) NSDictionary *collationColumnMapping; // ivar: _collationColumnMapping
@property (readonly, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, copy, nonatomic) NSString *disambiguatedName;
@property (readonly, nonatomic) Class entityClass; // ivar: _entityClass
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *predicateString; // ivar: _predicateString
@property (readonly, nonatomic, getter=isUnique) BOOL unique; // ivar: _unique


-(id)creationSQL;
-(id)initWithEntity:(Class)arg0 name:(id)arg1 columns:(id)arg2 ;
-(id)initWithEntity:(Class)arg0 name:(id)arg1 columns:(id)arg2 collationForColumn:(id)arg3 unique:(BOOL)arg4 predicateString:(id)arg5 ;
-(id)initWithEntity:(Class)arg0 name:(id)arg1 columns:(id)arg2 unique:(BOOL)arg3 predicateString:(id)arg4 ;


@end


#endif
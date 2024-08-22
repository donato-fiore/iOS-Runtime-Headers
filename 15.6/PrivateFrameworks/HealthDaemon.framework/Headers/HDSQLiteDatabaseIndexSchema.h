// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITEDATABASEINDEXSCHEMA_H
#define HDSQLITEDATABASEINDEXSCHEMA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface HDSQLiteDatabaseIndexSchema : NSObject

@property (retain, nonatomic) NSArray *columns; // ivar: _columns
@property (nonatomic) BOOL isUnique; // ivar: _isUnique
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif
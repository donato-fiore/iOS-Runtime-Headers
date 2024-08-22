// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSQLITEDATABASETABLESCHEMA_H
#define HDSQLITEDATABASETABLESCHEMA_H

@class NSDictionary, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HDSQLiteDatabaseTableSchema : NSObject

@property (retain, nonatomic) NSDictionary *columns; // ivar: _columns
@property (copy, nonatomic) NSString *createTableSchema; // ivar: _createTableSchema
@property (retain, nonatomic) NSSet *indices; // ivar: _indices
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSet *triggers; // ivar: _triggers


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif
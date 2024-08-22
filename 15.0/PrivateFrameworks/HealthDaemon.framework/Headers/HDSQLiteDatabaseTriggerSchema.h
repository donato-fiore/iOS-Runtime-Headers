// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSQLITEDATABASETRIGGERSCHEMA_H
#define HDSQLITEDATABASETRIGGERSCHEMA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSQLiteDatabaseTriggerSchema : NSObject

@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *sql; // ivar: _sql
@property (copy, nonatomic) NSString *tableName; // ivar: _tableName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif
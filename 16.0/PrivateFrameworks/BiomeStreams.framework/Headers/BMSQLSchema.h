// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSQLSCHEMA_H
#define BMSQLSCHEMA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)createTableSQL;
-(id)description;
-(id)init;
-(id)initWithTableName:(id)arg0 columns:(id)arg1 ;


@end


#endif
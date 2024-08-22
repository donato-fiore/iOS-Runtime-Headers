// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDATABASECOMMANDBUILDER_H
#define CKVDATABASECOMMANDBUILDER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKVSQLCommandCriterion.h"

@interface CKVDatabaseCommandBuilder : NSObject

@property (readonly, nonatomic) CKVSQLCommandCriterion *criterion; // ivar: _criterion
@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName


-(id)init;
-(id)initWithTableName:(id)arg0 ;
-(void)setCommandCriterion:(id)arg0 ;


@end


#endif
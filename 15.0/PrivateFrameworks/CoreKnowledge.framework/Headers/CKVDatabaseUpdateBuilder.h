// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDATABASEUPDATEBUILDER_H
#define CKVDATABASEUPDATEBUILDER_H

@class NSMutableArray;


#import "CKVDatabaseCommandBuilder.h"

@interface CKVDatabaseUpdateBuilder : CKVDatabaseCommandBuilder {
    NSMutableArray *_columnNames;
    NSMutableArray *_columnValues;
}




-(id)build;
-(id)initWithTableName:(id)arg0 ;
-(void)setCommandCriterion:(id)arg0 ;
-(void)setValue:(id)arg0 forColumn:(id)arg1 ;


@end


#endif
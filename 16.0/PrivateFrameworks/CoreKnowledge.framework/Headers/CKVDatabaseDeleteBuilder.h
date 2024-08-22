// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASEDELETEBUILDER_H
#define CKVDATABASEDELETEBUILDER_H

@class NSArray;


#import "CKVDatabaseCommandBuilder.h"

@interface CKVDatabaseDeleteBuilder : CKVDatabaseCommandBuilder {
    NSArray *_returningColumns;
}




-(id)build;
-(void)setCommandCriterion:(id)arg0 ;
-(void)setReturningColumns:(id)arg0 ;


@end


#endif
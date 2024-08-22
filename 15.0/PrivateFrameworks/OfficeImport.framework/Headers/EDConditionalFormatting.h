// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCONDITIONALFORMATTING_H
#define EDCONDITIONALFORMATTING_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "EDReferenceCollection.h"

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}




+(id)conditionalFormatting;
-(BOOL)isApplyToDate;
-(NSUInteger)rangeCount;
-(NSUInteger)ruleCount;
-(id)description;
-(id)init;
-(id)rangeAtIndex:(NSUInteger)arg0 ;
-(id)ruleAtIndex:(NSUInteger)arg0 ;
-(id)rules;
-(void)addRange:(id)arg0 ;
-(void)addRule:(id)arg0 ;


@end


#endif
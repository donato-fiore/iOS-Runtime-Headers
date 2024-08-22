// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSSEARCHINFO_H
#define _UIFOCUSSEARCHINFO_H


#import <Foundation/Foundation.h>


@interface _UIFocusSearchInfo : NSObject

@property (copy, nonatomic) id *evaluator; // ivar: _evaluator
@property (nonatomic) BOOL forceFocusToLeaveContainer; // ivar: _forceFocusToLeaveContainer
@property (nonatomic) BOOL treatFocusableItemAsLeaf; // ivar: _treatFocusableItemAsLeaf


+(id)defaultInfo;
-(BOOL)shouldIncludeFocusItem:(id)arg0 ;
-(id)initWithFocusEvaluator:(id)arg0 ;


@end


#endif
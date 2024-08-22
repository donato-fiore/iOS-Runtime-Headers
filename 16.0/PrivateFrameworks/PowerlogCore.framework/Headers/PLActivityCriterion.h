// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACTIVITYCRITERION_H
#define PLACTIVITYCRITERION_H

@protocol PLActivityCriterionDelegate;

#import <Foundation/Foundation.h>


@interface PLActivityCriterion : NSObject

@property (weak) NSObject<PLActivityCriterionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL satisfied; // ivar: _satisfied


-(id)init;
-(void)didCompleteActivity:(id)arg0 ;
-(void)didDisableActivity:(id)arg0 ;
-(void)didEnableActivity:(id)arg0 ;
-(void)didInterruptActivity:(id)arg0 ;


@end


#endif
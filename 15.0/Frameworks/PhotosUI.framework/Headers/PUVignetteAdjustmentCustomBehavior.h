// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUVIGNETTEADJUSTMENTCUSTOMBEHAVIOR_H
#define PUVIGNETTEADJUSTMENTCUSTOMBEHAVIOR_H

@class NSString;
@protocol PUAdjustmentCustomBehavior;

#import <Foundation/Foundation.h>


@interface PUVignetteAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dataSource:(id)arg0 adjustmentInfo:(id)arg1 populateNewAdjustmentController:(id)arg2 ;


@end


#endif
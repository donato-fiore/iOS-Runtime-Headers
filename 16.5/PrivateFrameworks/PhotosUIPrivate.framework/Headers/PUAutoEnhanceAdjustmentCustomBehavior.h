// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUAUTOENHANCEADJUSTMENTCUSTOMBEHAVIOR_H
#define PUAUTOENHANCEADJUSTMENTCUSTOMBEHAVIOR_H

@class NSString;
@protocol PUAdjustmentCustomBehavior;

#import <Foundation/Foundation.h>

#import "PUAdjustmentsDataSource.h"

@interface PUAutoEnhanceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior>



@property (weak, nonatomic) PUAdjustmentsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dataSource:(id)arg0 adjustmentInfo:(id)arg1 setEnabled:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif
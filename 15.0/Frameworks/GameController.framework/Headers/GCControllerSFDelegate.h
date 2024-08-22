// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCCONTROLLERSFDELEGATE_H
#define GCCONTROLLERSFDELEGATE_H

@class NSUserActivity, NSString;
@protocol NSUserActivityDelegate;

#import <Foundation/Foundation.h>


@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate>

 {
    NSUserActivity *_activity;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fireCompletionHandler;
-(void)startScan;
-(void)userActivityWasContinued:(id)arg0 ;


@end


#endif
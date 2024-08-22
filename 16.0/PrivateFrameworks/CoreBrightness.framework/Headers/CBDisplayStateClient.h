// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBDISPLAYSTATECLIENT_H
#define CBDISPLAYSTATECLIENT_H

@protocol OS_os_log, OS_dispatch_queue, CBDisplayStateClientDelegate;

#import <Foundation/Foundation.h>

#import "BrightnessSystemClientInternal.h"

@interface CBDisplayStateClient : NSObject {
    BrightnessSystemClientInternal *_bsci;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _active;
}


@property (retain, nonatomic) NSObject<CBDisplayStateClientDelegate> *completionDelegate; // ivar: _completionDelegate
@property (readonly, nonatomic) NSInteger displayMode;


-(BOOL)switchToFlipbookState:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)transitionToDisplayMode:(NSInteger)arg0 withDuration:(CGFloat)arg1 error:(*id)arg2 ;
-(id)init;
-(void)_displayModeChangeCompletionHandler:(NSInteger)arg0 ;
-(void)_removeCompletionDelegate;
-(void)activate;
-(void)cancel;
-(void)dealloc;


@end


#endif
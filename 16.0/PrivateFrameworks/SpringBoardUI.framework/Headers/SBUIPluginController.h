// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPLUGINCONTROLLER_H
#define SBUIPLUGINCONTROLLER_H

@class NSString;
@protocol SBPluginBundleController, SBUIPluginControllerHost;

#import <Foundation/Foundation.h>


@interface SBUIPluginController : NSObject <SBPluginBundleController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBUIPluginControllerHost> *host; // ivar: _host
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _isVisible


-(BOOL)handleActivationEvent:(int)arg0 eventSource:(int)arg1 context:(*void)arg2 ;
-(BOOL)handledButtonDownEventFromSource:(int)arg0 ;
-(BOOL)handledButtonTapFromSource:(int)arg0 ;
-(BOOL)handledButtonUpEventFromSource:(int)arg0 ;
-(BOOL)handledPasscodeUnlockWithCompletion:(id)arg0 ;
-(BOOL)supportedAndEnabled;
-(BOOL)wantsActivationEvent:(int)arg0 eventSource:(int)arg1 interval:(*CGFloat)arg2 ;
-(id)viewControllerForActivationContext:(id)arg0 ;
-(void)cancelPendingActivationEvent:(int)arg0 ;
-(void)prepareForActivationEvent:(int)arg0 eventSource:(int)arg1 afterInterval:(CGFloat)arg2 ;
-(void)registeredWithHost;


@end


#endif
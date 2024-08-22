// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIASTREAMRATEADAPTATION_H
#define VCMEDIASTREAMRATEADAPTATION_H

@class NSString;
@protocol AVCRateControllerDelegate, VCMediaStreamRateAdaptationDelegate;

#import <Foundation/Foundation.h>

#import "AVCRateController.h"

@interface VCMediaStreamRateAdaptation : NSObject <AVCRateControllerDelegate>

 {
    AVCRateController *_rateController;
    *OpaqueFigCFWeakReference _delegateWeak;
    id<VCMediaStreamRateAdaptationDelegate> *_delegate;
    int _mode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)start;
-(BOOL)stop;
-(BOOL)updateRateControlWithNetworkNotification:(struct ifnet_interface_advisory *)arg0 ;
-(id)initWithDelegate:(id)arg0 params:(struct tagVCMediaStreamRateAdaptationParams )arg1 ;
-(void)configureRateControllerWithConfig:(struct tagVCMediaStreamRateAdaptationConfig *)arg0 ;
-(void)dealloc;
-(void)rateController:(id)arg0 targetBitrateDidChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2 ;


@end


#endif
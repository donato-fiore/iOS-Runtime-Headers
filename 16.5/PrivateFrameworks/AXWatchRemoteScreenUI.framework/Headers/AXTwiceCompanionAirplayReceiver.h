// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXTWICECOMPANIONAIRPLAYRECEIVER_H
#define AXTWICECOMPANIONAIRPLAYRECEIVER_H

@class NSString, APRKStreamRenderer;
@protocol APRKStreamRendererDelegate, APRKStreamRenderingManagerDelegate, AXTwiceCompanionAirplayReceiverDelegate;

#import <Foundation/Foundation.h>


@interface AXTwiceCompanionAirplayReceiver : NSObject <APRKStreamRendererDelegate, APRKStreamRenderingManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXTwiceCompanionAirplayReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) APRKStreamRenderer *streamRenderer; // ivar: _streamRenderer
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)start;
-(void)cleanup;
-(void)dealloc;
-(void)didChangeStreamRendererModeTo:(NSUInteger)arg0 forRenderer:(id)arg1 ;
-(void)didStartStreamingWithRenderer:(id)arg0 ;
-(void)didStopStreamingWithRenderer:(id)arg0 ;
-(void)shouldHideGlobalPasscode;
-(void)shouldShowGlobalPasscodeWithString:(id)arg0 withClientName:(id)arg1 ;


@end


#endif
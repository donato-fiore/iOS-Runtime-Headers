// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUISOUNDMETERVIEWINTERFACE_H
#define HUISOUNDMETERVIEWINTERFACE_H

@class NSString;
@protocol HUISoundMeterListenerDelegate, HUISoundMeterViewInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "HUISoundMeterListener.h"
#import "HUISoundMeterViewInterfaceInternal.h"

@interface HUISoundMeterViewInterface : NSObject <HUISoundMeterListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUISoundMeterViewInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUISoundMeterListener *meteringListener; // ivar: _meteringListener
@property (retain, nonatomic) HUISoundMeterViewInterfaceInternal *soundMeterViewInterfaceInternal; // ivar: _soundMeterViewInterfaceInternal
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(id)initWithConfigurationType:(NSUInteger)arg0 delegate:(id)arg1 source:(NSUInteger)arg2 ;
-(id)soundMeterView;
-(id)soundMeterViewController;
-(void)liveLevelMeteringDisplayStateChanged:(BOOL)arg0 ;
-(void)localSourceAvailableDidUpdate:(BOOL)arg0 ;
-(void)remoteSourceAvailableDidUpdate:(BOOL)arg0 ;
-(void)start;
-(void)stop;
-(void)updateViewsWith:(CGFloat)arg0 fastLeq:(CGFloat)arg1 thresholdLevel:(NSUInteger)arg2 ;


@end


#endif
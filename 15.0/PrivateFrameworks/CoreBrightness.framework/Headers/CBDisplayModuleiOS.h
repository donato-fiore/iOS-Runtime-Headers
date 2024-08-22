// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBDISPLAYMODULEIOS_H
#define CBDISPLAYMODULEIOS_H

@protocol CBBrightnessProxy;


#import "CBDisplayModule.h"
#import "CBEDR.h"

@interface CBDisplayModuleiOS : CBDisplayModule {
    float _trustedLux;
    id<CBBrightnessProxy> *_brtCtl;
    float _minNits;
    float _midNits;
    float _maxNits;
    float _maxNitsEDR;
    float _nitsSDR;
    float _dynSliderCap;
    BOOL _blrEnabled;
    BOOL _harmonyEnabled;
    CBEDR *_edr;
    float _appliedHeadroom;
    float _requestedHeadroom;
    float _appliedComp;
    BOOL _ecoMode;
}


@property (readonly) *__Display displayInternal; // ivar: _displayInternal


-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(float)computeBrightnessCompensation;
-(id)className;
-(id)copyIdentifiers;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(id)initWithBacklight:(unsigned int)arg0 queue:(id)arg1 brtCtl:(id)arg2 ;
-(id)initWithBacklight:(unsigned int)arg0 queue:(id)arg1 display:(id)arg2 ;
-(void)dealloc;
-(void)handleDisplayBrightnessUpdate:(id)arg0 ;
-(void)handleEDRHeadroomRequest:(id)arg0 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)initialiseEDR;
-(void)initialiseSDR;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTDEVICESERVICE_H
#define SVXCLIENTDEVICESERVICE_H

@class NSString;
@protocol SVXClientServiceConsuming, SVXClientDeviceServicing, SVXPerforming, SVXClientServiceProviding;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupContext.h"

@interface SVXClientDeviceService : NSObject <SVXClientServiceConsuming, SVXClientDeviceServicing>

 {
    id<SVXPerforming> *_performer;
    id<SVXClientServiceProviding> *_clientServiceProvider;
    SVXDeviceSetupContext *_currentSetupContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
-(void)_beginSetupWithContext:(id)arg0 ;
-(void)_endSetup;
-(void)_prepareForSetupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_updateSetupContext;
-(void)beginSetupWithContext:(id)arg0 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)endSetup;
-(void)prepareForSetupWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STTELEPHONYSTATUSDOMAINDATAPROVIDER_H
#define STTELEPHONYSTATUSDOMAINDATAPROVIDER_H

@class STTelephonyStatusDomainPublisher, NSString;
@protocol STTelephonyStateObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "STTelephonyStateProvider.h"

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable>

 {
    STTelephonyStateProvider *_telephonyStateProvider;
    STTelephonyStatusDomainPublisher *_telephonyDomainPublisher;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithServerHandle:(id)arg0 ;
-(id)initWithServerHandle:(id)arg0 stateProvider:(id)arg1 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;


@end


#endif
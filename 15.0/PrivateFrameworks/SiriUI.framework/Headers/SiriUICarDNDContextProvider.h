// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUICARDNDCONTEXTPROVIDER_H
#define SIRIUICARDNDCONTEXTPROVIDER_H

@class SADeviceCarDNDHintContext;
@protocol AFContextProvider, SiriUICarDNDContextProviderDelegate;

#import <Foundation/Foundation.h>


@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider>



@property (weak, nonatomic) NSObject<SiriUICarDNDContextProviderDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic, setter=_setHintContext:) SADeviceCarDNDHintContext *hintContext; // ivar: _hintContext


-(BOOL)allowContextProvider:(id)arg0 ;
-(id)getCurrentContext;


@end


#endif
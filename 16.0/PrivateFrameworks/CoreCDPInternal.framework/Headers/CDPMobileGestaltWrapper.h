// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPMOBILEGESTALTWRAPPER_H
#define CDPMOBILEGESTALTWRAPPER_H

@class NSString;
@protocol CDPDeviceCapabilityProvider;

#import <Foundation/Foundation.h>


@interface CDPMobileGestaltWrapper : NSObject <CDPDeviceCapabilityProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)supportsMesa;
-(BOOL)supportsPearl;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSECUREELEMENT_HWMANAGEREVENTLISTENER_H
#define PKSECUREELEMENT_HWMANAGEREVENTLISTENER_H

@class NSString;
@protocol NFHardwareEventListener;

#import <Foundation/Foundation.h>


@interface PKSecureElement_HWManagerEventListener : NSObject <NFHardwareEventListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)secureElement:(id)arg0 didChangeRestrictedMode:(BOOL)arg1 ;


@end


#endif
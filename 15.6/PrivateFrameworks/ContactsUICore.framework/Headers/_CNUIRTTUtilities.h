// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNUIRTTUTILITIES_H
#define _CNUIRTTUTILITIES_H

@class NSString, RTTTelephonyUtilities;
@protocol CNUIRTTUtilities;

#import <Foundation/Foundation.h>


@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) RTTTelephonyUtilities *utilityProvider; // ivar: _utilityProvider


-(BOOL)contactIsTTYContact:(id)arg0 ;
-(BOOL)relayIsSupported;
-(id)init;
-(id)initWithUtilityProvider:(id)arg0 ;
-(id)nts_lazyUtilityProvider;


@end


#endif
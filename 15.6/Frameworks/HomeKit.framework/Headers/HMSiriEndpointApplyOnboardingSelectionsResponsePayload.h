// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSIRIENDPOINTAPPLYONBOARDINGSELECTIONSRESPONSEPAYLOAD_H
#define HMSIRIENDPOINTAPPLYONBOARDINGSELECTIONSRESPONSEPAYLOAD_H

@class NSArray, NSString;
@protocol HMFLogging, HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>


@interface HMSiriEndpointApplyOnboardingSelectionsResponsePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger onboardingResult; // ivar: _onboardingResult
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithOnboardingResult:(NSInteger)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif
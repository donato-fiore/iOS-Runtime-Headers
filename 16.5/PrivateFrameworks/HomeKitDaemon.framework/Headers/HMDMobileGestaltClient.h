// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMOBILEGESTALTCLIENT_H
#define HMDMOBILEGESTALTCLIENT_H

@class HMFObject, NSString;
@protocol HMDMobileGestaltClient;



@interface HMDMobileGestaltClient : HMFObject <HMDMobileGestaltClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL homeSafetySecurityEnabled; // ivar: _homeSafetySecurityEnabled
@property (readonly) Class superclass;
@property (readonly) BOOL supportsSiriHub;


-(id)init;
-(id)initWithHomeSafetySecurityEnabled:(BOOL)arg0 ;


@end


#endif
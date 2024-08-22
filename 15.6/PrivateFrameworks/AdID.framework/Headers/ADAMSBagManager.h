// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADAMSBAGMANAGER_H
#define ADAMSBAGMANAGER_H

@class ADSingleton, NSString;
@protocol AMSBagConsumer;



@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)sharedInstance;
-(BOOL)authenticateAccountThroughAMSOperation:(id)arg0 ;
-(BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
-(BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
-(NSInteger)retrieveLatestPersonalizedAdsConsentVersionFromAMSBag;
-(id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg0 ;


@end


#endif
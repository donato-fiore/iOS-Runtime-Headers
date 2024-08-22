// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFUSERPROFILEPROVIDER_IOS_H
#define MFUSERPROFILEPROVIDER_IOS_H

@class EMUserProfileProvider, NSString;
@protocol EMUserProfileProviderSubclassMethods;



@interface MFUserProfileProvider_iOS : EMUserProfileProvider <EMUserProfileProviderSubclassMethods>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultProvider;
-(id)_accountsEmailAddresses;


@end


#endif
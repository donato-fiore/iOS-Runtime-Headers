// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPFEATUREFLAGS_H
#define CPFEATUREFLAGS_H

@class NSString;
@protocol CPFeatureFlags;

#import <Foundation/Foundation.h>


@interface CPFeatureFlags : NSObject <CPFeatureFlags>



@property (readonly, nonatomic) BOOL autoGameCenterEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL expanseEnabled;
@property (readonly, nonatomic) BOOL expanseParticipantIDHashed;
@property (readonly, nonatomic) BOOL expanseTopicStateEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mochiEnabled;
@property (readonly, nonatomic) BOOL newApplicationLauncherEnabled;
@property (readonly, nonatomic) BOOL qrPluginEncryptionEnabled;
@property (readonly, nonatomic) BOOL sharePlayLiteEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL unreliableMessengerEnabled;




@end


#endif
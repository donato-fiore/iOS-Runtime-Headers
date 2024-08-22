// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNFEATUREFLAGS_H
#define LNFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface LNFeatureFlags : NSObject



+(BOOL)isActionTranscriptEnabled;
+(BOOL)isLowPowerDeviceEnabled;
+(BOOL)isRuntimeMetadataSupported;
+(BOOL)isStaticMetadataIngestionEnabled;
+(BOOL)isViewActionAnnotationEnabled;
+(BOOL)isVocabularyDonationEnabled;
+(id)allFeatures;
+(void)setIsVocabularyDonationOverrideEnabled:(BOOL)arg0 ;


@end


#endif
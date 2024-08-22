// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPPTFAKEAPPSUGGESTION_H
#define SBPPTFAKEAPPSUGGESTION_H

@class NSUUID, NSString;


#import "SBBestAppSuggestion.h"

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)activityType;
-(id)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)originatingDeviceName;
-(id)originatingDeviceType;
-(id)suggestedLocationName;
-(id)uniqueIdentifier;


@end


#endif
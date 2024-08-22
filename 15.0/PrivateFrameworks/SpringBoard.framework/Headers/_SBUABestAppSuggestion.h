// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBUABESTAPPSUGGESTION_H
#define _SBUABESTAPPSUGGESTION_H

@class UABestAppSuggestion;


#import "SBBestAppSuggestion.h"

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {
    UABestAppSuggestion *_appSuggestion;
}




-(BOOL)isCallContinuitySuggestion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHandoff;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(NSUInteger)hash;
-(id)activityType;
-(id)bundleIdentifier;
-(id)lastUpdateTime;
-(id)originatingDeviceIdentifier;
-(id)originatingDeviceName;
-(id)originatingDeviceType;
-(id)uniqueIdentifier;


@end


#endif
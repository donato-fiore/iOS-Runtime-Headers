// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUTILITIES_H
#define CDPUTILITIES_H


#import <Foundation/Foundation.h>


@interface CDPUtilities : NSObject



+(BOOL)canEnableMultiUserManatee;
+(BOOL)hasFullCDPSupport;
+(BOOL)isAudioAccessory;
+(BOOL)isInternalBuild;
+(BOOL)isMultiUserManateeFeatureEnabled;
+(BOOL)isSilentEscrowRecordViabilityRepairEnabled;


@end


#endif
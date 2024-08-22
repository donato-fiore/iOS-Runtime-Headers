// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETPOLICY_H
#define MAAUTOASSETPOLICY_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetPolicy : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *additionalPolicyControl; // ivar: _additionalPolicyControl
@property (nonatomic) BOOL interestAcrossTermination; // ivar: _interestAcrossTermination
@property (nonatomic) BOOL lockAcrossOTAUpdate; // ivar: _lockAcrossOTAUpdate
@property (nonatomic) BOOL lockAcrossReboot; // ivar: _lockAcrossReboot
@property (nonatomic) BOOL lockAcrossTermination; // ivar: _lockAcrossTermination
@property (nonatomic) BOOL lockInhibitsEmergencyRemoval; // ivar: _lockInhibitsEmergencyRemoval
@property (nonatomic) NSInteger preventGarbageCollectionSecs; // ivar: _preventGarbageCollectionSecs
@property (nonatomic) NSInteger unlockAfterUsageSecs; // ivar: _unlockAfterUsageSecs
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated
@property (nonatomic) NSInteger waitForNewestSecs; // ivar: _waitForNewestSecs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newSummaryDictionary;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
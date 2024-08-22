// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAVIDEOTIERPARAMETERS_H
#define HMDCAMERAVIDEOTIERPARAMETERS_H

@class HMFObject, NSString, NSArray, NSDictionary;
@protocol NSSecureCoding, HMFLogging;


#import "HMDCameraVideoTier.h"
#import "HMDCameraStreamSessionID.h"

@interface HMDCameraVideoTierParameters : HMFObject <NSSecureCoding, HMFLogging>



@property (retain, nonatomic) HMDCameraVideoTier *currentPickedTier; // ivar: _currentPickedTier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDCameraVideoTier *firstPickedTier; // ivar: _firstPickedTier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tierOrder; // ivar: _tierOrder
@property (readonly, nonatomic) NSDictionary *videoTierCombinations; // ivar: _videoTierCombinations


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)pickHigherTier;
-(BOOL)pickLowerTier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 streamingCapabilities:(id)arg1 ;
-(id)logIdentifier;
-(void)_generateAllVideoTiers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateFirstPickedTier:(id)arg0 ;
-(void)updateTierOrder:(id)arg0 ;
-(void)updateTierParameters:(id)arg0 firstPickedParameter:(id)arg1 ;


@end


#endif
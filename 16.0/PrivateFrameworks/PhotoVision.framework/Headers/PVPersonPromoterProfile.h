// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVPERSONPROMOTERPROFILE_H
#define PVPERSONPROMOTERPROFILE_H


#import <Foundation/Foundation.h>


@interface PVPersonPromoterProfile : NSObject

@property (nonatomic) CGFloat highlyInterestingPersonFacesCumulativeNormalDistributionUpperTail; // ivar: _highlyInterestingPersonFacesCumulativeNormalDistributionUpperTail
@property (nonatomic) CGFloat highlyInterestingPersonLastSeenCumulativeNormalDistributionLowerTail; // ivar: _highlyInterestingPersonLastSeenCumulativeNormalDistributionLowerTail
@property (nonatomic) CGFloat highlyInterestingPersonLastSeenCumulativeNormalDistributionUpperTail; // ivar: _highlyInterestingPersonLastSeenCumulativeNormalDistributionUpperTail
@property (nonatomic) CGFloat highlyInterestingPersonMomentsCumulativeNormalDistributionUpperTail; // ivar: _highlyInterestingPersonMomentsCumulativeNormalDistributionUpperTail
@property (nonatomic) NSUInteger highlyInterestingPersonNormalDistributionsToMatch; // ivar: _highlyInterestingPersonNormalDistributionsToMatch
@property (nonatomic) CGFloat highlyInterestingPersonTimeCumulativeNormalDistributionUpperTail; // ivar: _highlyInterestingPersonTimeCumulativeNormalDistributionUpperTail
@property (nonatomic) CGFloat interestingPersonFacesCumulativeNormalDistributionUpperTail; // ivar: _interestingPersonFacesCumulativeNormalDistributionUpperTail
@property (nonatomic) CGFloat interestingPersonFacesNormalDistributionSigmaFactor; // ivar: _interestingPersonFacesNormalDistributionSigmaFactor
@property (nonatomic) CGFloat interestingPersonLastSeenCumulativeNormalDistributionLowerTail; // ivar: _interestingPersonLastSeenCumulativeNormalDistributionLowerTail
@property (nonatomic) CGFloat interestingPersonLastSeenCumulativeNormalDistributionUpperTail; // ivar: _interestingPersonLastSeenCumulativeNormalDistributionUpperTail
@property (nonatomic) CGFloat interestingPersonLastSeenNormalDistributionSigmaFactor; // ivar: _interestingPersonLastSeenNormalDistributionSigmaFactor
@property (nonatomic) CGFloat interestingPersonMomentsCumulativeNormalDistributionUpperTail; // ivar: _interestingPersonMomentsCumulativeNormalDistributionUpperTail
@property (nonatomic) CGFloat interestingPersonMomentsNormalDistributionSigmaFactor; // ivar: _interestingPersonMomentsNormalDistributionSigmaFactor
@property (nonatomic) NSUInteger interestingPersonNormalDistributionsToMatch; // ivar: _interestingPersonNormalDistributionsToMatch
@property (nonatomic) CGFloat interestingPersonTimeCumulativeNormalDistributionUpperTail; // ivar: _interestingPersonTimeCumulativeNormalDistributionUpperTail
@property (nonatomic) CGFloat interestingPersonTimeNormalDistributionSigmaFactor; // ivar: _interestingPersonTimeNormalDistributionSigmaFactor


-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSMAGSAFEACCESSORYCONFIGURATION_H
#define CSMAGSAFEACCESSORYCONFIGURATION_H

@protocol CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating;

#import <Foundation/Foundation.h>

#import "CSMagSafeRingConfiguration.h"
#import "CSLayoutStrategy.h"

@interface CSMagSafeAccessoryConfiguration : NSObject <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating>



@property (nonatomic) CSMagSafeRingConfiguration *auxiliaryRing; // ivar: _auxiliaryRing
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (nonatomic) CSMagSafeRingConfiguration *ring; // ivar: _ring
@property (nonatomic) BOOL staticViewNeeded; // ivar: _staticViewNeeded
@property (nonatomic) CGFloat staticViewRingDiameter; // ivar: _staticViewRingDiameter
@property (readonly, nonatomic) CGRect visibleScreenCoordinatesForSleeve;


+(id)batteryCaseConfiguration;
+(id)configuration:(id)arg0 withBatteryPack:(BOOL)arg1 ;
+(id)defaultConfiguration;
+(id)staticViewConfiguration;
-(BOOL)containsCenteredDateTimeLayout;
-(CGFloat)bottomContentInset;
-(CGFloat)complicationContainerHeight;
-(CGFloat)dateBaselineToComplicationY;
-(CGFloat)dateTimeMostExtremeLeadingX;
-(CGFloat)dateTimeMostExtremeTrailingX;
-(CGFloat)dateTimeSubtitleMaximumWidth;
-(CGFloat)listMinY;
-(CGFloat)prominentBaselineToListY;
-(CGFloat)timeLabelBaselineY;
-(CGFloat)timeLabelOffsetForScrollPercent:(CGFloat)arg0 ;
-(CGFloat)timeToSubtitleLabelBaselineDifferenceY;
-(CGFloat)windowedAccessoryInset;
-(id)initWithStaticViewNeeded:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPREDICTEDLOCATIONTRANSITIONTRIGGER_H
#define WFPREDICTEDLOCATIONTRANSITIONTRIGGER_H



#import "WFTrigger.h"

@interface WFPredictedLocationTransitionTrigger : WFTrigger

@property (nonatomic) NSUInteger destinationType; // ivar: _destinationType
@property (nonatomic) NSUInteger minutesBefore; // ivar: _minutesBefore


+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyph;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
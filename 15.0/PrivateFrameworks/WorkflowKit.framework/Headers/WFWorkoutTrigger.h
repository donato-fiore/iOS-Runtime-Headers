// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKOUTTRIGGER_H
#define WFWORKOUTTRIGGER_H

@class NSArray;


#import "WFTrigger.h"

@interface WFWorkoutTrigger : WFTrigger

@property (nonatomic) BOOL onEnd; // ivar: _onEnd
@property (nonatomic) BOOL onStart; // ivar: _onStart
@property (copy, nonatomic) NSArray *selectedWorkoutTypes; // ivar: _selectedWorkoutTypes
@property (nonatomic) NSUInteger selection; // ivar: _selection


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphHierarchicalColors;
+(id)displayGlyphName;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)offIcon;
+(id)offLabel;
+(id)onIcon;
+(id)onLabel;
+(id)stopColor;
+(id)workoutColors;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
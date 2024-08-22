// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUSERFOCUSACTIVITYTRIGGER_H
#define WFUSERFOCUSACTIVITYTRIGGER_H

@class NSString, WFColor;


#import "WFTrigger.h"

@interface WFUserFocusActivityTrigger : WFTrigger

@property (retain, nonatomic) NSString *activityGlyphName; // ivar: _activityGlyphName
@property (retain, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (retain, nonatomic) NSString *activityName; // ivar: _activityName
@property (retain, nonatomic) WFColor *activityTintColor; // ivar: _activityTintColor
@property (nonatomic) BOOL onDisable; // ivar: _onDisable
@property (nonatomic) BOOL onEnable; // ivar: _onEnable


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
+(id)displayGlyphTintColor;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)offIcon;
+(id)offIconTintColor;
+(id)offLabel;
+(id)onIcon;
+(id)onIconTintColor;
+(id)onLabel;
+(id)tintColor;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayGlyph;
-(id)displayGlyphName;
-(id)displayGlyphTintColor;
-(id)init;
-(id)initWithActivity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedDisplayExplanation;
-(id)localizedDisplayName;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
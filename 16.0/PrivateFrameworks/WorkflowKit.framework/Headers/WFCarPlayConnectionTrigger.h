// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCARPLAYCONNECTIONTRIGGER_H
#define WFCARPLAYCONNECTIONTRIGGER_H



#import "WFTrigger.h"

@interface WFCarPlayConnectionTrigger : WFTrigger

@property (nonatomic) BOOL onConnect; // ivar: _onConnect
@property (nonatomic) BOOL onDisconnect; // ivar: _onDisconnect


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)offIcon;
+(id)offLabel;
+(id)onIcon;
+(id)onLabel;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
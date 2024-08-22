// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSLEEPTRIGGER_H
#define WFSLEEPTRIGGER_H



#import "WFTrigger.h"

@interface WFSleepTrigger : WFTrigger

@property (nonatomic) NSUInteger selection; // ivar: _selection


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
+(id)displayGlyphTintColor;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
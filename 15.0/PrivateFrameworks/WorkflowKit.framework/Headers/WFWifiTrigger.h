// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWIFITRIGGER_H
#define WFWIFITRIGGER_H

@class NSArray;


#import "WFTrigger.h"

@interface WFWifiTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedNetworks; // ivar: _selectedNetworks
@property (nonatomic) NSUInteger selection; // ivar: _selection


+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
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
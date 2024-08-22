// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRIGGER_H
#define WFTRIGGER_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>





+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(CGFloat)displayGlyphCornerRadius;
+(NSInteger)triggerBacking;
+(id)displayGlyph;
+(id)displayGlyphHierarchicalColors;
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
+(id)triggerWithSerializedData:(id)arg0 ;
-(BOOL)hasValidConfiguration;
-(CGFloat)displayGlyphCornerRadius;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayGlyph;
-(id)displayGlyphHierarchicalColors;
-(id)displayGlyphName;
-(id)displayGlyphTintColor;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedDisplayExplanation;
-(id)localizedDisplayName;
-(id)localizedPastTenseDescription;
-(id)serializedData;
-(void)configureWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
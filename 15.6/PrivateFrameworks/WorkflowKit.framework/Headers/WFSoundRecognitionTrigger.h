// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSOUNDRECOGNITIONTRIGGER_H
#define WFSOUNDRECOGNITIONTRIGGER_H

@class NSSet;


#import "WFTrigger.h"

@interface WFSoundRecognitionTrigger : WFTrigger

@property (copy, nonatomic) NSSet *soundDetectionTypes; // ivar: _soundDetectionTypes


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)supportsSecureCoding;
+(CGFloat)displayGlyphCornerRadius;
+(NSInteger)triggerBacking;
+(id)displayGlyph;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
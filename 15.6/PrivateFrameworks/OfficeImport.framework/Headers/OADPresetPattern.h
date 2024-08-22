// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADPRESETPATTERN_H
#define OADPRESETPATTERN_H



#import "OADPattern.h"

@interface OADPresetPattern : OADPattern {
    int mType;
    BOOL mIsTypeOverridden;
}




+(id)defaultProperties;
+(id)nameForPresetPatternType:(int)arg0 ;
+(id)namedBitmapDataForPresetPatternType:(int)arg0 ;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTypeOverridden;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(int)type;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif
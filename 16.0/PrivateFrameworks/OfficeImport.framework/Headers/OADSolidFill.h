// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADSOLIDFILL_H
#define OADSOLIDFILL_H



#import "OADFill.h"
#import "OADColor.h"

@interface OADSolidFill : OADFill {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}




+(id)blackFill;
+(id)defaultProperties;
+(id)whiteFill;
-(BOOL)isAnythingOverridden;
-(BOOL)isColorOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesPlaceholderColor;
-(NSUInteger)hash;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setColor:(id)arg0 ;
-(void)setStyleColor:(id)arg0 ;


@end


#endif
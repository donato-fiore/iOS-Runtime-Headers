// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADPATTERNFILL_H
#define OADPATTERNFILL_H



#import "OADFill.h"
#import "OADColor.h"
#import "OADPattern.h"

@interface OADPatternFill : OADFill {
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isBgColorOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFgColorOverridden;
-(BOOL)isPatternOverridden;
-(NSUInteger)hash;
-(id)bgColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fgColor;
-(id)initWithDefaults;
-(id)namedImageDataWithBlipCollection:(id)arg0 ;
-(id)pattern;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setBgColor:(id)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setFgColor:(id)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setPattern:(id)arg0 ;
-(void)setStyleColor:(id)arg0 ;


@end


#endif
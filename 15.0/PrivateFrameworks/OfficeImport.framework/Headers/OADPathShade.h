// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADPATHSHADE_H
#define OADPATHSHADE_H



#import "OADShade.h"
#import "OADRelativeRect.h"

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    int mType;
    BOOL mIsTypeOverridden;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFillToRectOverridden;
-(BOOL)isTypeOverridden;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fillToRect;
-(id)initWithDefaults;
-(int)type;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setFillToRect:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif
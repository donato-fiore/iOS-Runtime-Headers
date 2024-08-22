// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADSTRETCHTECHNIQUE_H
#define OADSTRETCHTECHNIQUE_H



#import "OADImageFillTechnique.h"
#import "OADRelativeRect.h"

@interface OADStretchTechnique : OADImageFillTechnique {
    OADRelativeRect *mFillRect;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFillRectOverridden;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fillRect;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setFillRect:(id)arg0 ;


@end


#endif
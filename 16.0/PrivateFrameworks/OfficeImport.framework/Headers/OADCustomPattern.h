// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADCUSTOMPATTERN_H
#define OADCUSTOMPATTERN_H



#import "OADPattern.h"
#import "OADBlipRef.h"

@interface OADCustomPattern : OADPattern {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isBlipRefOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)blipRef;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)setBlipRef:(id)arg0 ;


@end


#endif
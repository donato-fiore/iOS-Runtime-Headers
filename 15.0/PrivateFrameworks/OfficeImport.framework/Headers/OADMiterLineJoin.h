// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADMITERLINEJOIN_H
#define OADMITERLINEJOIN_H



#import "OADLineJoin.h"

@interface OADMiterLineJoin : OADLineJoin {
    float mLimit;
    BOOL mIsLimitOverridden;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLimitOverridden;
-(NSUInteger)hash;
-(float)limit;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setLimit:(float)arg0 ;


@end


#endif
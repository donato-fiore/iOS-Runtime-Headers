// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADPRESETDASH_H
#define OADPRESETDASH_H



#import "OADDash.h"

@interface OADPresetDash : OADDash {
    char mType;
    BOOL mIsTypeOverridden;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTypeOverridden;
-(NSUInteger)hash;
-(char)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)equivalentCustomDash;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)setType:(char)arg0 ;


@end


#endif
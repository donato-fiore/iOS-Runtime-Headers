// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADCUSTOMDASH_H
#define OADCUSTOMDASH_H

@class NSArray;


#import "OADDash.h"

@interface OADCustomDash : OADDash {
    NSArray *mStops;
}




+(id)defaultProperties;
-(BOOL)areStopsOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(id)stops;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)setStops:(id)arg0 ;


@end


#endif
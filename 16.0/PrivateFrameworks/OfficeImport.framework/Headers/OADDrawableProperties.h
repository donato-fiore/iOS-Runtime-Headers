// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADDRAWABLEPROPERTIES_H
#define OADDRAWABLEPROPERTIES_H

@class NSString;


#import "OADProperties.h"
#import "OADOrientedBounds.h"
#import "OADHyperlink.h"

@interface OADDrawableProperties : OADProperties {
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    BOOL mHasAspectRatioLocked;
    BOOL mAspectRatioLocked;
    BOOL mHasWrdInline;
    BOOL mWrdInline;
}




-(BOOL)hasAltDescription;
-(BOOL)hasAltTitle;
-(BOOL)hasAspectRatioLocked;
-(BOOL)hasClickHyperlink;
-(BOOL)hasHoverHyperlink;
-(BOOL)hasOrientedBounds;
-(BOOL)hasWrdInline;
-(BOOL)isAspectRatioLocked;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isWrdInline;
-(NSUInteger)hash;
-(id)altDescription;
-(id)altTitle;
-(id)clickHyperlink;
-(id)description;
-(id)hoverHyperlink;
-(id)initWithDefaults;
-(id)orientedBounds;
-(id)orientedBoundsForCharts;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setAltDescription:(id)arg0 ;
-(void)setAltTitle:(id)arg0 ;
-(void)setAspectRatioLocked:(BOOL)arg0 ;
-(void)setClickHyperlink:(id)arg0 ;
-(void)setHoverHyperlink:(id)arg0 ;
-(void)setOrientedBounds:(id)arg0 ;
-(void)setWrdInline:(BOOL)arg0 ;


@end


#endif
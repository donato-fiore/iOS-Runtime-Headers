// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADGRAPHICPROPERTIES_H
#define OADGRAPHICPROPERTIES_H

@class NSArray, NSString;
@protocol OADEffectsParent, OADProperties3DParent;


#import "OADDrawableProperties.h"
#import "OADFill.h"
#import "OADScene3D.h"
#import "OADShape3D.h"
#import "OADStroke.h"

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>

 {
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    BOOL mHasIsBehindText;
    BOOL mIsBehindText;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEffects;
-(BOOL)hasExts;
-(BOOL)hasFill;
-(BOOL)hasIsBehindText;
-(BOOL)hasNonEmptyFill;
-(BOOL)hasScene3D;
-(BOOL)hasShape3D;
-(BOOL)hasStroke;
-(BOOL)isBehindText;
-(BOOL)isEqual:(id)arg0 ;
-(id)effects;
-(id)exts;
-(id)fill;
-(id)initWithDefaults;
-(id)scene3D;
-(id)shape3D;
-(id)stroke;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setEffects:(id)arg0 ;
-(void)setExts:(id)arg0 ;
-(void)setFill:(id)arg0 ;
-(void)setIsBehindText:(BOOL)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setScene3D:(id)arg0 ;
-(void)setShape3D:(id)arg0 ;
-(void)setStroke:(id)arg0 ;


@end


#endif
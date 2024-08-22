// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADGROUPPROPERTIES_H
#define OADGROUPPROPERTIES_H

@class NSArray, NSString;
@protocol OADEffectsParent, OADProperties3DParent;


#import "OADDrawableProperties.h"
#import "OADFill.h"
#import "OADScene3D.h"
#import "OADShape3D.h"

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>

 {
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultProperties;
-(BOOL)hasEffects;
-(BOOL)hasFill;
-(BOOL)hasScene3D;
-(BOOL)hasShape3D;
-(id)effects;
-(id)fill;
-(id)initWithDefaults;
-(id)scene3D;
-(id)shape3D;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)setEffects:(id)arg0 ;
-(void)setFill:(id)arg0 ;
-(void)setScene3D:(id)arg0 ;
-(void)setShape3D:(id)arg0 ;


@end


#endif
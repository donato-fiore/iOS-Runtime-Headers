// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDEFFECTRENDITIONSPEC_H
#define TDEFFECTRENDITIONSPEC_H

@class NSOrderedSet, NSNumber;


#import "TDRenditionSpec.h"
#import "TDEffectComponent.h"

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectOutputOpacity;
@property (readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectShapeOpacity;
@property (retain, nonatomic) NSOrderedSet *components;
@property (retain, nonatomic) NSNumber *effectScale;


-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(id)componentOfType:(unsigned int)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(id)effectPreset;
-(void)replaceComponentsWithComponentsFromEffectRendition:(id)arg0 withDocument:(id)arg1 ;


@end


#endif
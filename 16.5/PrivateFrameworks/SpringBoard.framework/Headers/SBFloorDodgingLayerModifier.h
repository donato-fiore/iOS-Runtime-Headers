// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLOORDODGINGLAYERMODIFIER_H
#define SBFLOORDODGINGLAYERMODIFIER_H



#import "SBDodgingModifier.h"
#import "SBDodgingModel.h"

@interface SBFloorDodgingLayerModifier : SBDodgingModifier

@property (retain, nonatomic) SBDodgingModel *overridingModel; // ivar: _overridingModel


-(NSInteger)animationBehaviorModeForIdentifier:(id)arg0 ;
-(id)_framesForIdentifiersInModel:(id)arg0 ;
-(id)_identifierIfAnyIllegallyClippingOtherIdentifiers:(id)arg0 model:(id)arg1 intersectionSize:(struct CGSize *)arg2 intersectingFrame:(struct CGRect *)arg3 ;
-(id)_identifierIfAnyIllegallyOutsideContentViewBounds:(id)arg0 model:(id)arg1 ;
-(id)_modelByClampingOverhangingIdentifiers:(id)arg0 ;
-(id)_modelByPerformingDodgingInModel:(id)arg0 ;
-(id)_modelsByResizingOverlappingIdentifiers:(id)arg0 ;
-(id)_modelsByTranslatingOverlappingIdentifiers:(id)arg0 allowedEdges:(NSUInteger)arg1 ;
-(id)framesForIdentifiers;
-(id)layoutSettingsForIdentifier:(id)arg0 ;
-(id)model;
-(id)modelForInvalidatedModel:(id)arg0 ;
-(id)zOrderedIdentifiers;


@end


#endif
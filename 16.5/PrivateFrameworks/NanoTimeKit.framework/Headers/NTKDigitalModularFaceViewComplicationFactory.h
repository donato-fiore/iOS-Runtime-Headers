// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKDIGITALMODULARFACEVIEWCOMPLICATIONFACTORY_H
#define NTKDIGITALMODULARFACEVIEWCOMPLICATIONFACTORY_H



#import "NTKFaceViewComplicationFactory.h"
#import "NTKLayoutRule.h"

@interface NTKDigitalModularFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKLayoutRule *_timeLayoutRuleNormal;
    NTKLayoutRule *_timeLayoutRuleEditing;
}




-(id)digitalTimeLayoutRuleForEditMode:(NSInteger)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(void)_loadLayoutRulesForState:(NSInteger)arg0 withTopGap:(CGFloat)arg1 largeModuleHeight:(CGFloat)arg2 faceView:(id)arg3 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;


@end


#endif
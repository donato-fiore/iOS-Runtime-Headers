// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKANALOGUTILITARIANFACEVIEWCOMPLICATIONFACTORY_H
#define NTKANALOGUTILITARIANFACEVIEWCOMPLICATIONFACTORY_H



#import "NTKFaceViewComplicationFactory.h"
#import "NTKUtilityComplicationFactory.h"

@interface NTKAnalogUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKUtilityComplicationFactory *_complicationFactory;
}




-(NSInteger)_utilitarianUtilitySlotForSlot:(id)arg0 ;
-(id)_utilityComplicationSlots;
-(id)initForDevice:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;


@end


#endif
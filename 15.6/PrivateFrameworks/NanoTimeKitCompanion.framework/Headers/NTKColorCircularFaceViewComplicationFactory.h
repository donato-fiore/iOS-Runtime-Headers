// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOLORCIRCULARFACEVIEWCOMPLICATIONFACTORY_H
#define NTKCOLORCIRCULARFACEVIEWCOMPLICATIONFACTORY_H



#import "NTKFaceViewComplicationFactory.h"

@interface NTKColorCircularFaceViewComplicationFactory : NTKFaceViewComplicationFactory



-(CGFloat)_colorCircularEdgeGapForState:(NSInteger)arg0 ;
-(CGFloat)_colorCircularKeylinePaddingForState:(NSInteger)arg0 ;
-(CGFloat)_colorCircularLisaGapForState:(NSInteger)arg0 ;
-(NSInteger)keylineStyleForComplicationSlot:(id)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;


@end


#endif
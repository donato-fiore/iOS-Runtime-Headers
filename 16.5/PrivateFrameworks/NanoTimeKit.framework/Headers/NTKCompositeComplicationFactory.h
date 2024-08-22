// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPOSITECOMPLICATIONFACTORY_H
#define NTKCOMPOSITECOMPLICATIONFACTORY_H

@class NSString, NSMutableOrderedSet, NSMutableDictionary;
@protocol NTKFaceViewComplicationFactory;

#import <Foundation/Foundation.h>


@interface NTKCompositeComplicationFactory : NSObject <NTKFaceViewComplicationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableOrderedSet *factories; // ivar: _factories
@property (retain, nonatomic) NSMutableDictionary *factoriesBySlot; // ivar: _factoriesBySlot
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)slotSupportsCurvedText:(id)arg0 ;
-(NSInteger)complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(id)factoryAtSlot:(id)arg0 ;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)curvedComplicationCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(id)arg5 ;
-(void)deregisterFactoryAtSlot:(id)arg0 ;
-(void)deregisterFactoryAtSlots:(id)arg0 ;
-(void)loadLayoutRules;
-(void)registerFactory:(id)arg0 forSlot:(id)arg1 ;
-(void)registerFactory:(id)arg0 forSlots:(id)arg1 ;


@end


#endif
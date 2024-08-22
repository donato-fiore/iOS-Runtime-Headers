// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKSIMPLETEXTFACEVIEWCOMPLICATIONFACTORY_H
#define NTKSIMPLETEXTFACEVIEWCOMPLICATIONFACTORY_H

@class NSString, CLKDevice, NTKFaceView<NTKUtilityFlatComplicationViewDelegate>;
@protocol NTKFaceViewComplicationFactory;

#import <Foundation/Foundation.h>


@interface NTKSimpleTextFaceViewComplicationFactory : NSObject <NTKFaceViewComplicationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NTKFaceView<NTKUtilityFlatComplicationViewDelegate> *faceView; // ivar: _faceView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat verticalCenterOffset; // ivar: _verticalCenterOffset


-(NSInteger)complicationPickerStyleForSlot:(id)arg0 ;
-(id)init;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(struct CGRect )_referenceFrame;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)loadLayoutRules;


@end


#endif
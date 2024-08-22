// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTEERASINGATTRIBUTESVIEWCONTROLLER_H
#define PKPALETTEERASINGATTRIBUTESVIEWCONTROLLER_H

@protocol PKPaletteErasingAttributesViewControllerDelegate;


#import "PKPaletteAttributeViewController.h"

@interface PKPaletteErasingAttributesViewController : PKPaletteAttributeViewController

@property (weak, nonatomic) NSObject<PKPaletteErasingAttributesViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger eraserType;
@property (nonatomic) BOOL hideWeightPicker; // ivar: _hideWeightPicker
@property (nonatomic) CGFloat weight;


+(CGFloat)_preferredContentSizeWidth;
-(BOOL)_canShowWhileLocked;
-(id)_attributesView;
-(struct CGSize )preferredContentSize;
-(void)_segmentedControlDidChangeValue:(id)arg0 ;
-(void)_thicknessValueChanged:(id)arg0 ;
-(void)loadView;


@end


#endif
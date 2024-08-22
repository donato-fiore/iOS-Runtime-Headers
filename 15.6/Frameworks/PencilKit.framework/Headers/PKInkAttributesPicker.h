// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINKATTRIBUTESPICKER_H
#define PKINKATTRIBUTESPICKER_H

@class NSString;
@protocol UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate, PKInkAttributesPickerDelegate;


#import "PKPaletteAttributeViewController.h"
#import "_PKInkAttributesPickerView.h"
#import "PKInk.h"

@interface PKInkAttributesPicker : PKPaletteAttributeViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate>



@property (nonatomic) NSInteger colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PKInkAttributesPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumOpacityValue; // ivar: _minimumOpacityValue
@property (retain, nonatomic) _PKInkAttributesPickerView *pickerView; // ivar: _pickerView
@property (retain, nonatomic) PKInk *selectedInk;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUpdatingOpacityValue) BOOL updatingOpacityValue; // ivar: _updatingOpacityValue


+(CGFloat)defaultMinimumOpacityValue;
-(BOOL)_canShowWhileLocked;
-(id)initWithInk:(id)arg0 ;
-(void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg0 ;
-(void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg0 ;
-(void)_notifyInkAttributesPickerDidChangeInk;
-(void)_updateUI;
-(void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg0 ;
-(void)inkAttributesPickerViewDidChangeInkThickness:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYDETAILPAGEVIEWCONTROLLER_H
#define PRCOMPLICATIONGALLERYDETAILPAGEVIEWCONTROLLER_H

@class UIViewController, NSArray, UIStackView, CHSWidgetDescriptor, UILayoutGuide, UIView;
@protocol PRComplicationGalleryDetailPageViewControllerDelegate, PRComplicationGalleryWidgetHostProviding;


#import "PRAddWidgetDetailSheetWidgetDescriptionView.h"

@interface PRComplicationGalleryDetailPageViewController : UIViewController

@property (copy, nonatomic) NSArray *complicationDescriptors; // ivar: _complicationDescriptors
@property (retain, nonatomic) UIStackView *complicationsStackView; // ivar: _complicationsStackView
@property (weak, nonatomic) NSObject<PRComplicationGalleryDetailPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PRAddWidgetDetailSheetWidgetDescriptionView *descriptionView; // ivar: _descriptionView
@property (retain, nonatomic) CHSWidgetDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (retain, nonatomic) UIView *referenceView; // ivar: _referenceView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (weak, nonatomic) NSObject<PRComplicationGalleryWidgetHostProviding> *widgetHostProviding; // ivar: _widgetHostProviding


-(id)initWithWidgetHostProviding:(id)arg0 ;
-(void)didTapCell:(id)arg0 ;
-(void)loadView;
-(void)updateParallaxEffectInReferenceView:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
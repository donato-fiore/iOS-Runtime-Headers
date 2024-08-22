// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCROPASPECTVIEWCONTROLLER_H
#define PUCROPASPECTVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, UIScrollView;
@protocol PUCropAspectViewControllerDelegate;


#import "PUCropAspect.h"
#import "PUCropToolControllerSpec.h"

@interface PUCropAspectViewController : UIViewController

@property (retain, nonatomic) NSArray *allAspectRatios; // ivar: _allAspectRatios
@property (retain, nonatomic) NSArray *aspectButtons; // ivar: _aspectButtons
@property (retain, nonatomic) NSArray *aspectConstraints; // ivar: _aspectConstraints
@property (nonatomic) NSInteger aspectOrientation; // ivar: _aspectOrientation
@property (retain, nonatomic) UIView *buttonContainer; // ivar: _buttonContainer
@property (retain, nonatomic) PUCropAspect *currentCropAspect; // ivar: _currentCropAspect
@property (nonatomic) CGSize currentCropSize; // ivar: _currentCropSize
@property (weak, nonatomic) NSObject<PUCropAspectViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) CGSize originalSize; // ivar: _originalSize
@property (retain, nonatomic) UIView *scrollExtraLeftView; // ivar: _scrollExtraLeftView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIView *scrollViewContainer; // ivar: _scrollViewContainer
@property (retain, nonatomic) PUCropToolControllerSpec *spec; // ivar: _spec


-(id)initWithLayoutOrientation:(NSInteger)arg0 originalSize:(struct CGSize )arg1 currentSize:(struct CGSize )arg2 currentCropAspect:(id)arg3 spec:(id)arg4 ;
-(id)matchingCropAspectTo:(id)arg0 ;
-(void)aspectButtonPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
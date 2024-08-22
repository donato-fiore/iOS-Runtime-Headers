// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLESUGGESTIONVIEW_H
#define PXPEOPLESUGGESTIONVIEW_H

@class NSDateFormatter, UILabel, UIView, UIImageView, CAShapeLayer;
@protocol PXPerson;


#import "PXSmartScaleView.h"
#import "PXPersonImageRequest.h"

@interface PXPeopleSuggestionView : PXSmartScaleView

@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) UIView *dimView; // ivar: _dimView
@property (nonatomic) CGRect faceRect; // ivar: _faceRect
@property (retain, nonatomic) PXPersonImageRequest *imageRequest; // ivar: _imageRequest
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL needsSpotlightUpdate; // ivar: _needsSpotlightUpdate
@property (retain, nonatomic) CAShapeLayer *spotlightLayer; // ivar: _spotlightLayer
@property (readonly, nonatomic) NSObject<PXPerson> *suggestion; // ivar: _suggestion
@property (retain, nonatomic) UIView *suggestionView; // ivar: _suggestionView
@property (nonatomic) BOOL validSpotlight; // ivar: _validSpotlight


-(CGFloat)_faceScale;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_scaledFaceRect;
-(void)_updateDateFieldWithSuggestion:(id)arg0 ;
-(void)_updateSpotlightAnimated:(BOOL)arg0 ;
-(void)_updateSuggestionImageWithAnimatedSpotlight:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)viewScaleDidChange;


@end


#endif
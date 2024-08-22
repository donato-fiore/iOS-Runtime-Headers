// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIMAGEANDMOVIETHUMBNAILVIEW_H
#define ICIMAGEANDMOVIETHUMBNAILVIEW_H

@class UIView, UIColor, NSMutableDictionary, UIImage, UIImageView, NSLayoutConstraint;


#import "ICLabel.h"

@interface ICImageAndMovieThumbnailView : UIView

@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) NSUInteger edgesToRemoveEndPoint; // ivar: _edgesToRemoveEndPoint
@property (nonatomic) NSUInteger edgesToRemoveStartPoint; // ivar: _edgesToRemoveStartPoint
@property (nonatomic) BOOL forceSquareImageAspectRatio; // ivar: _forceSquareImageAspectRatio
@property (retain, nonatomic) NSMutableDictionary *hairlineColors; // ivar: _hairlineColors
@property (nonatomic) NSUInteger hairlineEdges; // ivar: _hairlineEdges
@property (retain, nonatomic) NSMutableDictionary *hairlineLayers; // ivar: _hairlineLayers
@property (nonatomic) BOOL hairlineWidthUnitIsInPoint; // ivar: _hairlineWidthUnitIsInPoint
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) CGFloat imageInset;
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomLayoutConstraint; // ivar: _imageViewBottomLayoutConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftLayoutConstraint; // ivar: _imageViewLeftLayoutConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightLayoutConstraint; // ivar: _imageViewRightLayoutConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopLayoutConstraint; // ivar: _imageViewTopLayoutConstraint
@property (nonatomic) CGFloat mininumScaleFactor; // ivar: _mininumScaleFactor
@property (nonatomic) ? movieDuration; // ivar: _movieDuration
@property (retain, nonatomic) ICLabel *movieDurationLabel; // ivar: _movieDurationLabel
@property (retain, nonatomic) UIView *movieFooter; // ivar: _movieFooter
@property (nonatomic) BOOL showAsMovie; // ivar: _showAsMovie
@property (nonatomic) BOOL showMovieDuration; // ivar: _showMovieDuration


-(BOOL)usesSeparateLayerForHairlineEdge:(NSUInteger)arg0 ;
-(BOOL)usesSeparateLayersForHairlines;
-(CGFloat)backingScale;
-(CGFloat)hairlineWidthInPoint;
-(CGFloat)pixelWidth;
-(id)hairlineLayerForEdge:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 showMovieDuration:(BOOL)arg1 ;
-(struct CGRect )frameByApplyingHorizontalReductionTo:(struct CGRect )arg0 edge:(NSUInteger)arg1 ;
-(struct CGRect )frameByApplyingVerticalReductionTo:(struct CGRect )arg0 edge:(NSUInteger)arg1 ;
-(void)commonInit;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setHairlineColor:(id)arg0 forEdges:(NSUInteger)arg1 ;
-(void)setupMovieFooter;
-(void)updateDurationLabel;
-(void)updateHairline;
-(void)updateHairlineFrames;


@end


#endif
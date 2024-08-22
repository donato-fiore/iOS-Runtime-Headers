// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGDOTVIEW_H
#define DOCTAGDOTVIEW_H

@class UIView, CALayer, NSString, DOCTag, UIImage, NSArray, NSLayoutConstraint;
@protocol DOCTagIconView;



@interface DOCTagDotView : UIView <DOCTagIconView>



@property (readonly, nonatomic) BOOL adjustsSizeForContentSizeCategory; // ivar: _adjustsSizeForContentSizeCategory
@property (nonatomic) BOOL checked; // ivar: _checked
@property (readonly, nonatomic) CALayer *checkmarkLayer; // ivar: _checkmarkLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultTagDimension; // ivar: _defaultTagDimension
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CALayer *dotLayer; // ivar: _dotLayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DOCTag *itemTag; // ivar: _itemTag
@property (retain, nonatomic) UIImage *itemTagImage; // ivar: _itemTagImage
@property (readonly, nonatomic) BOOL needsItemTagImageUpdate; // ivar: _needsItemTagImageUpdate
@property (readonly, nonatomic) NSArray *notificationObservances; // ivar: _notificationObservances
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tagDimension;
@property (readonly, nonatomic) NSLayoutConstraint *tagDimensionConstraint; // ivar: _tagDimensionConstraint


-(id)initWithDefaultTagDimension:(CGFloat)arg0 adjustsSizeForContentSizeCategory:(BOOL)arg1 ;
-(void)_updateSizeConstraint;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)loadItemTagImageIfNecessary;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContents;
-(void)updateLayoutOfLayers;


@end


#endif
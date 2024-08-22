// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUROUTINGACCESSORYVIEW_H
#define MRUROUTINGACCESSORYVIEW_H

@class UIView, UIActivityIndicatorView, NSString, UIImageView;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRURoutingAccessoryView : UIView <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) UIActivityIndicatorView *activityView; // ivar: _activityView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateImageViewVisualStyle;
-(void)updateState;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif
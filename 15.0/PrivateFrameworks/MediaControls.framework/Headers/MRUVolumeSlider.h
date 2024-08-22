// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVOLUMESLIDER_H
#define MRUVOLUMESLIDER_H

@class MPVolumeSlider, NSString;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRUVolumeSlider : MPVolumeSlider <MRUVisualStylingProviderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(id)createThumbView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithThumbSize:(CGFloat)arg0 ;
-(struct CGRect )maximumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )minimumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif
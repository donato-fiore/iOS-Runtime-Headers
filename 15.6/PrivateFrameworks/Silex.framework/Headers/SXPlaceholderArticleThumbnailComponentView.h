// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPLACEHOLDERARTICLETHUMBNAILCOMPONENTVIEW_H
#define SXPLACEHOLDERARTICLETHUMBNAILCOMPONENTVIEW_H

@class UILabel;


#import "SXComponentView.h"

@interface SXPlaceholderArticleThumbnailComponentView : SXComponentView

@property (readonly, nonatomic) UILabel *label; // ivar: _label


-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 ;
-(void)layoutSubviews;
-(void)loadComponent:(id)arg0 ;


@end


#endif
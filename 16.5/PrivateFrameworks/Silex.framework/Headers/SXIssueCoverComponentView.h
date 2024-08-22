// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXISSUECOVERCOMPONENTVIEW_H
#define SXISSUECOVERCOMPONENTVIEW_H

@class UIView;
@protocol SXIssueCoverViewProvider;


#import "SXComponentView.h"

@interface SXIssueCoverComponentView : SXComponentView

@property (retain, nonatomic) UIView *coverView; // ivar: _coverView
@property (readonly, nonatomic) NSObject<SXIssueCoverViewProvider> *viewProvider; // ivar: _viewProvider


-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 viewProvider:(id)arg4 ;
-(void)discardContents;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;
-(void)renderIssueCover;


@end


#endif
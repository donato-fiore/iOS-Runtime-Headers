// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPCOMPONENTVIEW_H
#define LPCOMPONENTVIEW_H

@class UIView;
@protocol LPComponentViewHost;



@interface LPComponentView : UIView

@property (readonly, weak, nonatomic) NSObject<LPComponentViewHost> *host; // ivar: _host


-(BOOL)isFlipped;
-(BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithHost:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)componentViewDidMoveToWindow;
-(void)didMoveToWindow;
-(void)layoutComponentView;
-(void)layoutSubviews;


@end


#endif
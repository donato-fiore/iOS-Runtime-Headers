// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9CHRONOKIT34WIDGETPREVIEWHOSTINGVIEWCONTROLLER_H
#define _TTC9CHRONOKIT34WIDGETPREVIEWHOSTINGVIEWCONTROLLER_H

@class TtC9ChronoKit28PreviewHostingViewController, CHSInlineTextParameters, CHSWidgetTintParameters;



@interface _TtC9ChronoKit34WidgetPreviewHostingViewController : TtC9ChronoKit28PreviewHostingViewController {
    ? timeline;
    ? delegateProxy;
    ? autoupdatingPreviewView;
    ? isLuminanceReduced;
}


@property (nonatomic, retain) CHSInlineTextParameters *inlineTextParameters;
@property (nonatomic, retain) CHSWidgetTintParameters *tintParameters; // ivar: tintParameters


-(id)initWithCoder:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
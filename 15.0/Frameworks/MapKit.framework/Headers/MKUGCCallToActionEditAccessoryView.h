// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKUGCCALLTOACTIONEDITACCESSORYVIEW_H
#define MKUGCCALLTOACTIONEDITACCESSORYVIEW_H

@class UIView, UIButton, UIActivityIndicatorView, NSString;
@protocol MKActivityObserving, UGCCallToActionEditAccessoryViewDelegate;



@interface MKUGCCallToActionEditAccessoryView : UIView <MKActivityObserving>

 {
    UIButton *_editButton;
    UIActivityIndicatorView *_spinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UGCCallToActionEditAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeChanged;
-(void)_editButtonPressed;
-(void)_setupEditButton;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;


@end


#endif
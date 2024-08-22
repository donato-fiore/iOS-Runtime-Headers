// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPREVIEWACTIONSHEETVIEW_H
#define _UIPREVIEWACTIONSHEETVIEW_H

@class NSArray, NSString;
@protocol UIGestureRecognizerDelegate, UIScrollViewDelegate, _UIPreviewActionSheetViewDelegate;


#import "UIView.h"
#import "UILongPressGestureRecognizer.h"

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) UILongPressGestureRecognizer *captureTouchesRecognizer; // ivar: _captureTouchesRecognizer
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPreviewActionSheetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 title:(id)arg1 items:(id)arg2 contentInsets:(struct UIEdgeInsets )arg3 ;
-(void)_performActionForPreviewAction:(id)arg0 interfaceAction:(id)arg1 ;
-(void)_setupViewHierarchy;


@end


#endif
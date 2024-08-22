// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKACTIONSHEETMENUVIEW_H
#define CKACTIONSHEETMENUVIEW_H

@class UIInterfaceActionGroupView, NSString;
@protocol UIInterfaceActionHandlerInvocationDelegate, CKActionSheetMenuViewDelegate;


#import "CKActionSheetMenuTitleView.h"

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate>

 {
    CKActionSheetMenuTitleView *_titleView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKActionSheetMenuViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTitle:(id)arg0 interfaceActions:(id)arg1 ;
-(void)dismissSelf;
// -(void)interfaceAction:(id)arg0 invokeActionHandler:(id)arg1 completion:(unk)arg2  ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)updateTitleConstraintsForBoundingRect:(struct CGRect )arg0 ;


@end


#endif
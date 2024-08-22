// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIALERTCONTROLLERINTERFACEACTIONGROUPVIEW_H
#define _UIALERTCONTROLLERINTERFACEACTIONGROUPVIEW_H



#import "UIInterfaceActionGroupView.h"
#import "UIAlertController.h"

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView

@property (weak, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (nonatomic) BOOL scrollableHeaderViewHasRealContent; // ivar: _scrollableHeaderViewHasRealContent


-(BOOL)_shouldInstallContentGuideConstraints;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(id)defaultVisualStyleForTraitCollection:(id)arg0 presentationStyle:(NSInteger)arg1 ;
-(id)initWithAlertController:(id)arg0 actionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2 ;


@end


#endif
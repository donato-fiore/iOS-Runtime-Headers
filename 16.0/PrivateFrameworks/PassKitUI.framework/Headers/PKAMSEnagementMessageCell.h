// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAMSENAGEMENTMESSAGECELL_H
#define PKAMSENAGEMENTMESSAGECELL_H

@class UITableViewCell, AMSUIDashboardMessageViewController, NSString;
@protocol AMSUIMessageViewControllerDelegate;


#import "PKDashboardPassMessage.h"

@interface PKAMSEnagementMessageCell : UITableViewCell <AMSUIMessageViewControllerDelegate>

 {
    AMSUIDashboardMessageViewController *_dashboardMessageController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKDashboardPassMessage *message; // ivar: _message
@property (readonly) Class superclass;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)displayDialogRequest:(id)arg0 ;
-(void)layoutSubviews;
-(void)messageViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)messageViewController:(id)arg0 didSelectActionWithDialogResult:(id)arg1 ;
-(void)messageViewController:(id)arg0 didUpdateSize:(struct CGSize )arg1 ;
-(void)messageViewControllerDidDismiss:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASHARESHEETINVITECONFIGURATIONCONTROLLER_H
#define FASHARESHEETINVITECONFIGURATIONCONTROLLER_H

@class FAInviteContext, UIViewController, NSArray, NSString;
@protocol UIActivityItemSource, FAActivityViewControllerDelegate, FAInviteConfigurationController, FAInviteControllerDelegate;

#import <Foundation/Foundation.h>

#import "FAInviteLinkMetadata.h"

@interface FAShareSheetInviteConfigurationController : NSObject <UIActivityItemSource, FAActivityViewControllerDelegate, FAInviteConfigurationController>

 {
    FAInviteContext *_context;
    FAInviteLinkMetadata *_linkMetadata;
    UIViewController *_presentationContext;
    NSArray *_recipientAddresses;
    id *_activityControllerCompletionHandler;
}


@property (nonatomic) BOOL alwaysNotifyServer; // ivar: _alwaysNotifyServer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAInviteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_parameterForActivityType:(id)arg0 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithInviteContext:(id)arg0 presentingController:(id)arg1 ;
-(id)linkMetadataForActivityViewController:(id)arg0 ;
-(void)_presentInviteControllerWithCompletion:(id)arg0 ;
-(void)activityViewController:(id)arg0 didCompleteActivityType:(id)arg1 ;
-(void)activityViewController:(id)arg0 willStartAsyncActivity:(id)arg1 ;
-(void)presentWhenReadyWithCompletion:(id)arg0 ;


@end


#endif
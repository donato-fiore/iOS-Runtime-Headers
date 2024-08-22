// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUISNIPPETEXTENSIONCARDSECTIONVIEWCONTROLLER_H
#define SIRIUISNIPPETEXTENSIONCARDSECTIONVIEWCONTROLLER_H

@class CRKCardSectionViewController, INUIRemoteViewController, NSString;
@protocol INUIRemoteViewControllerDelegate;


#import "SiriUICardSectionView.h"

@interface SiriUISnippetExtensionCardSectionViewController : CRKCardSectionViewController <INUIRemoteViewControllerDelegate>

 {
    INUIRemoteViewController *_remoteViewController;
    id *_touchDeliveryPolicyAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SiriUICardSectionView *view;


+(id)cardSectionClasses;
-(BOOL)_shouldAttemptToConnectToRemoteViewController;
-(struct CGSize )maximumSizeForRemoteViewController:(id)arg0 ;
-(struct CGSize )minimumSizeForRemoteViewController:(id)arg0 ;
-(void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg0 forParameters:(id)arg1 ;
-(void)_cancelTouchesIfNecessary;
-(void)_loadCardSectionView;
-(void)_resumeTouchesIfNecessary;
-(void)dealloc;
-(void)remoteViewControllerServiceDidTerminate:(id)arg0 ;


@end


#endif
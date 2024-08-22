// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSBUDDYMLCONTROLLER_H
#define TSBUDDYMLCONTROLLER_H

@class UIBarButtonItem, RemoteUIController, NSString, NSURL;
@protocol RemoteUIControllerDelegate, TSSIMSetupFlowDelegate;

#import <Foundation/Foundation.h>


@interface TSBuddyMLController : NSObject <RemoteUIControllerDelegate>

 {
    BOOL _initialRequest;
    UIBarButtonItem *_cancelButton;
    RemoteUIController *_remoteUIController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSURL *url; // ivar: _url


-(id)initWithHostController:(id)arg0 ;
-(void)_configureRUIController;
-(void)_userDidTapCancel;
-(void)loadRequest:(id)arg0 completion:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didRemoveObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif
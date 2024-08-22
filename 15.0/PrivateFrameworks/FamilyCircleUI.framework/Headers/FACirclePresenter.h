// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FACIRCLEPRESENTER_H
#define FACIRCLEPRESENTER_H

@class RemoteUIController, RUIStyle, NSString, UIViewController;
@protocol FACircleRemoteUIDelegateDelegate, FACirclePresenterDelegate;

#import <Foundation/Foundation.h>

#import "FACircleRemoteUIDelegate.h"
#import "FAProfilePictureStore.h"

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate>

 {
    RemoteUIController *_remoteUIController;
    FACircleRemoteUIDelegate *_remoteUIDelegate;
    FAProfilePictureStore *_familyPictureStore;
    id *_completion;
}


@property (retain, nonatomic) RUIStyle *customRUIStyle; // ivar: _customRUIStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<FACirclePresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(id)_serverHookHandlerWithRemoteUIController:(id)arg0 ;
-(id)init;
-(id)initWithPresenter:(id)arg0 context:(id)arg1 ;
-(void)circleRemoteUIDelegate:(id)arg0 completedWithResponse:(id)arg1 ;
-(void)circleRemoteUIDelegateDidPresent:(id)arg0 ;
-(void)loadRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACTIONUSERINTERFACE_H
#define WFACTIONUSERINTERFACE_H

@class WFDialogAttribution, NSString, UIViewController;
@protocol WFActionRemoteUserInterface, WFActionUserInterfaceDelegate;

#import <Foundation/Foundation.h>


@interface WFActionUserInterface : NSObject <WFActionRemoteUserInterface>



@property (readonly, nonatomic) WFDialogAttribution *attribution; // ivar: _attribution
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFActionUserInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType; // ivar: _userInterfaceType
@property (retain, nonatomic) UIViewController *viewControllerForPresenting; // ivar: _viewControllerForPresenting


-(id)initWithUserInterfaceType:(id)arg0 attribution:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;


@end


#endif
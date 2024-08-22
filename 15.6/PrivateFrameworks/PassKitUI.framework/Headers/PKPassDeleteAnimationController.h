// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSDELETEANIMATIONCONTROLLER_H
#define PKPASSDELETEANIMATIONCONTROLLER_H

@class UIAlertController;
@protocol PKPassDeleteAnimationControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"
#import "PKPassView.h"

@interface PKPassDeleteAnimationController : NSObject {
    UIAlertController *_alertController;
}


@property (weak, nonatomic) NSObject<PKPassDeleteAnimationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, retain, nonatomic) PKPassGroupView *groupView; // ivar: _groupView
@property (readonly, retain, nonatomic) PKPassView *passView; // ivar: _passView


+(void)performPassbookDeleteWithView:(id)arg0 inSuperview:(id)arg1 completion:(id)arg2 ;
-(id)initWithPassView:(id)arg0 groupView:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_registerForEnterBackgroundNotification;
-(void)_startAnimation;
-(void)_unregisterForEnterBackgroundNotification;
-(void)dealloc;
-(void)finished:(BOOL)arg0 ;
-(void)forceDeleteAnimation;
-(void)showInViewController:(id)arg0 ;


@end


#endif
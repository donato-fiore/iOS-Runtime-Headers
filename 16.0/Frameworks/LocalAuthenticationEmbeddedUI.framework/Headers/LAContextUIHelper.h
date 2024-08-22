// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LACONTEXTUIHELPER_H
#define LACONTEXTUIHELPER_H

@class NSString;
@protocol LAAuthorizationViewControllerDelegate, LAContextObserver;

#import <Foundation/Foundation.h>

#import "LAAuthorizationViewController.h"

@interface LAContextUIHelper : NSObject <LAAuthorizationViewControllerDelegate, LAContextObserver>

 {
    id *_pendingReply;
    LAAuthorizationViewController *_ui;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)authenticateWithOptions:(id)arg0 availableMechanisms:(id)arg1 hostVC:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)authorizationController:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)authorizationController:(id)arg0 didProvideAuthorizationRequirementWithReply:(id)arg1 ;
-(void)cancel;
-(void)contextDidBecomeInvalid:(id)arg0 ;
-(void)dealloc;


@end


#endif
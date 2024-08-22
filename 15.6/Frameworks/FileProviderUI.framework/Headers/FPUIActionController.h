// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPUIACTIONCONTROLLER_H
#define FPUIACTIONCONTROLLER_H

@class NSString, NSArray;
@protocol FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol, FPUIActionControllerDelegate;

#import <Foundation/Foundation.h>


@interface FPUIActionController : NSObject <FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol>



@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPUIActionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (readonly) Class superclass;


+(id)actionControllerForActionIdentifier:(id)arg0 actionTitle:(id)arg1 items:(id)arg2 providerIdentifier:(id)arg3 domainIdentifier:(id)arg4 ;
-(id)_getExtensionWithError:(*id)arg0 ;
-(id)performActionWithCompletionHandler:(id)arg0 ;
-(void)_delegateDidFinishWithUserInfo:(id)arg0 error:(id)arg1 ;
-(void)_delegateError:(id)arg0 ;
-(void)remoteActionContext:(id)arg0 didEncounterError:(id)arg1 completionHandler:(id)arg2 ;
-(void)remoteActionContextDidFinishAction:(id)arg0 userInfo:(id)arg1 error:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTEDITAUTHORIZATIONMANAGER_H
#define CNCONTACTEDITAUTHORIZATIONMANAGER_H

@class CNContact, CNContactStore, NSString, CNContainer;
@protocol CNUIEditAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNUIEditAuthorizationController.h"
#import "CNContactViewCache.h"

@interface CNContactEditAuthorizationManager : NSObject <CNUIEditAuthorizationControllerDelegate>



@property (retain, nonatomic) CNUIEditAuthorizationController *authorizationController; // ivar: _authorizationController
@property (nonatomic) NSInteger authorizationResult; // ivar: _authorizationResult
@property (copy, nonatomic) id *authorizationResultBlock; // ivar: _authorizationResultBlock
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (retain, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (readonly) Class superclass;


-(BOOL)saveWasAuthorized;
-(BOOL)shouldPromptForPasscodeAuthorization;
-(id)authorizationCheck;
-(id)initWithContact:(id)arg0 contactStore:(id)arg1 ;
-(void)authorizeForViewController:(id)arg0 sender:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)editAuthorizationController:(id)arg0 authorizationDidFinishWithResult:(NSInteger)arg1 ;
-(void)resetAuthorization;
-(void)updateWithContact:(id)arg0 ;


@end


#endif
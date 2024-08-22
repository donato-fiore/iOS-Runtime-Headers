// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAAUTOACCOUNTVERIFIER_H
#define AAAUTOACCOUNTVERIFIER_H

@class MSSearch, NSOperationQueue, ACAccount, NSString;
@protocol MSSearchDelegate;

#import <Foundation/Foundation.h>


@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate>

 {
    MSSearch *_search;
    NSOperationQueue *_requesterQueue;
    id *_handler;
    int _attempts;
    BOOL _canceled;
}


@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)search:(id)arg0 didFindResults:(id)arg1 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(void)_resendVerificationEmailForAccount:(id)arg0 completion:(id)arg1 ;
-(void)_validateToken:(id)arg0 ;
-(void)_verify;
-(void)cancel;
-(void)search:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)sendVerificationEmail;
-(void)verifyWithHandler:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUADDITUNESPASSOPERATION_H
#define SUADDITUNESPASSOPERATION_H

@class ISOperation, SSAuthenticationContext, NSString, PKPass, UIViewController;
@protocol PKAddPassesViewControllerDelegate, OS_dispatch_semaphore;



@interface SUAddiTunesPassOperation : ISOperation <PKAddPassesViewControllerDelegate>



@property (nonatomic) BOOL addedCard; // ivar: _addedCard
@property (retain, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPass *presentedPass; // ivar: _presentedPass
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 ;
-(void)addPassesViewControllerDidFinish:(id)arg0 ;
-(void)run;


@end


#endif
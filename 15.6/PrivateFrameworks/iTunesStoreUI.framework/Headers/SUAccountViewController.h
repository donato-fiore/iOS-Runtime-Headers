// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUACCOUNTVIEWCONTROLLER_H
#define SUACCOUNTVIEWCONTROLLER_H

@class NSURL, NSString, NSDictionary, ACAccount, UIBarButtonItem;
@protocol SUNavigationItemDelegate;


#import "SUStorePageViewController.h"
#import "SUMescalSession.h"

@interface SUAccountViewController : SUStorePageViewController <SUNavigationItemDelegate>

 {
    BOOL _failed;
    NSURL *_accountURL;
    NSInteger _mescalState;
    NSString *_primingSignature;
    NSDictionary *_tidHeaders;
}


@property (readonly, nonatomic, getter=_mescalSession) SUMescalSession *_mescalSession; // ivar: _mescalSession
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *logoutButton; // ivar: _logoutButton
@property (nonatomic) BOOL showAccountGlyph; // ivar: _showAccountGlyph
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(id)_latestAccountViewController;
-(BOOL)_shouldUseWebViewFastPath;
-(BOOL)shouldSignRequests;
-(id)_URLByRemovingBlacklistedParametersWithURL:(id)arg0 ;
-(id)_authenticationQueryParametersForStyle:(NSInteger)arg0 ;
-(id)_bagKeyForStyle:(NSInteger)arg0 ;
-(id)copyArchivableContext;
-(id)init;
-(id)initWithExternalAccountURL:(id)arg0 ;
-(id)navigationItem:(id)arg0 willChangeLeftItem:(id)arg1 toNewItem:(id)arg2 ;
-(id)navigationItem:(id)arg0 willChangeLeftItems:(id)arg1 toNewItems:(id)arg2 ;
-(id)newFetchOperation;
-(id)newViewControllerForPage:(id)arg0 ofType:(NSInteger)arg1 returningError:(*id)arg2 ;
-(void)_closeMescalSession;
-(void)_didEnterBackground:(id)arg0 ;
-(void)_forceOrientationBackToSupportedOrientation;
-(void)_logoutPressed:(id)arg0 ;
-(void)_mescalDidOpenWithSession:(id)arg0 error:(id)arg1 ;
-(void)enqueueFetchOperation;
-(void)handleFailureWithError:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
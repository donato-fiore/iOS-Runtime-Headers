// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAPPAUTOFILLONETIMECODEPROVIDER_H
#define SFAPPAUTOFILLONETIMECODEPROVIDER_H

@class IMOneTimeCodeAccelerator, NSHashTable, NSMapTable, NSTimer, WBSAutoFillAssociatedDomainsManager;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

#import <Foundation/Foundation.h>

#import "SFAutoFillOneTimeCode.h"

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_messagesOneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentReceivedOneTimeCode;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSTimer *_generatorTimer;
}


@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager; // ivar: _associatedDomainsManager
@property (weak, nonatomic) NSObject<SFAppAutoFillOneTimeCodeProviderDelegate> *delegate; // ivar: _delegate


-(BOOL)_appWithAppIdentifierIsWebBrowser:(id)arg0 ;
-(BOOL)_validateURL:(id)arg0 withURLFromOriginBoundCode:(id)arg1 ;
-(BOOL)hasOneTimeCodeForAppWithAuditToken:(struct ? )arg0 ;
-(id)_associatedDomainEntriesForAppWithIdentifier:(id)arg0 ;
-(id)_savedAccountsWithPasswordsForURL:(id)arg0 ;
-(id)_secureURLWithDomain:(id)arg0 ;
-(id)_sortedOneTimeCodesFromSavedAccounts:(id)arg0 ;
-(id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)arg0 fieldClassification:(NSInteger)arg1 ;
-(id)currentOneTimeCodesWithAppIdentifier:(id)arg0 website:(id)arg1 usernameHint:(id)arg2 fieldClassification:(NSInteger)arg3 ;
-(id)currentOneTimeCodesWithAuditToken:(struct ? )arg0 website:(id)arg1 usernameHint:(id)arg2 fieldClassification:(NSInteger)arg3 ;
-(id)init;
-(id)initWithMessagesOneTimeCodeSupport:(BOOL)arg0 ;
-(void)_notifyOneTimeCodeObserver;
-(void)_processOneTimeCodeFromMessages:(id)arg0 ;
-(void)_startGeneratorTimer;
-(void)_stopGeneratorTimer;
-(void)_validateCurrentOneTimeCode;
-(void)addObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 forOneTimeCode:(id)arg1 ;
-(void)consumeCurrentOneTimeCode;
-(void)consumeMessagesOneTimeCodeWithGUID:(id)arg0 ;
-(void)consumeOneTimeCode:(id)arg0 ;
-(void)didFocusOneTimeCodeField;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserverForOneTimeCode:(id)arg0 ;


@end


#endif
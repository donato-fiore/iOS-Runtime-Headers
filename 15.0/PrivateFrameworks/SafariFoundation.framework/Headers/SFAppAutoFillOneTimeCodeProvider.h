// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPPAUTOFILLONETIMECODEPROVIDER_H
#define SFAPPAUTOFILLONETIMECODEPROVIDER_H

@class IMOneTimeCodeAccelerator, NSHashTable, NSMapTable, NSTimer;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

#import <Foundation/Foundation.h>

#import "SFAutoFillOneTimeCode.h"

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentOneTimeCodeFromMessages;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSTimer *_generatorTimer;
}


@property (weak, nonatomic) NSObject<SFAppAutoFillOneTimeCodeProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasOneTimeCode;


-(BOOL)_appWithAuditTokenIsWebBrowser:(struct ? )arg0 ;
-(BOOL)_validateURL:(id)arg0 withURLFromOriginBoundCode:(id)arg1 ;
-(BOOL)hasOneTimeCodeForAppWithAuditToken:(struct ? )arg0 ;
-(id)_associatedDomainEntriesForAppWithIdentifier:(id)arg0 ;
-(id)_savedPasswordsForURL:(id)arg0 ;
-(id)_secureURLWithDomain:(id)arg0 ;
-(id)_sortedOneTimeCodesFromSavedPasswords:(id)arg0 ;
-(id)currentOneTimeCodeWithAuditToken:(struct ? )arg0 website:(id)arg1 ;
-(id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)arg0 fieldClassification:(NSInteger)arg1 ;
-(id)currentOneTimeCodesWithAuditToken:(struct ? )arg0 website:(id)arg1 usernameHint:(id)arg2 fieldClassification:(NSInteger)arg3 ;
-(id)init;
-(void)_processOneTimeCodeFromMessages:(id)arg0 ;
-(void)_startGeneratorTimer;
-(void)_stopGeneratorTimer;
-(void)_validateCurrentOneTimeCode;
-(void)addObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 forOneTimeCode:(id)arg1 ;
-(void)consumeCurrentOneTimeCode;
-(void)consumeOneTimeCode:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserverForOneTimeCode:(id)arg0 ;


@end


#endif
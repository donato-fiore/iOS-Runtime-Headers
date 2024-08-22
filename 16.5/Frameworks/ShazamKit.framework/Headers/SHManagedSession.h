// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMANAGEDSESSION_H
#define SHMANAGEDSESSION_H

@protocol SHSessionDelegate, SHMatcher;

#import <Foundation/Foundation.h>

#import "SHCatalog.h"
#import "SHMatcherRequest.h"
#import "SHSession.h"
#import "SHManagedSessionDriver.h"

@interface SHManagedSession : NSObject

@property (readonly, nonatomic) SHCatalog *catalog; // ivar: _catalog
@property (weak, nonatomic) NSObject<SHSessionDelegate> *delegate;
@property (retain, nonatomic) SHMatcherRequest *inflightRequest; // ivar: _inflightRequest
@property (nonatomic) BOOL sendNotifications; // ivar: _sendNotifications
@property (readonly, nonatomic) SHSession *session; // ivar: _session
@property (readonly, nonatomic) SHManagedSessionDriver *sessionDriver; // ivar: _sessionDriver
@property (readonly, nonatomic) NSObject<SHMatcher> *shazamServiceConnection; // ivar: _shazamServiceConnection


-(BOOL)isUsingCustomCatalog:(id)arg0 ;
-(id)init;
-(id)initWithCatalog:(id)arg0 ;
-(id)initWithCatalog:(id)arg0 matcher:(id)arg1 sessionDriver:(id)arg2 serviceConnection:(id)arg3 ;
-(id)initWithPartnerName:(id)arg0 ;
-(void)matchAmbientAudioSnippet;
-(void)matchAmbientAudioSnippetUntilDeadline:(id)arg0 ;
-(void)stopMatchingAmbientAudioSnippet;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHMANAGEDSESSION_H
#define SHMANAGEDSESSION_H

@protocol SHSessionDelegate;

#import <Foundation/Foundation.h>

#import "SHCatalog.h"
#import "SHManagedShazamCatalog.h"
#import "SHSession.h"

@interface SHManagedSession : NSObject

@property (readonly, nonatomic) SHCatalog *catalog;
@property (weak, nonatomic) NSObject<SHSessionDelegate> *delegate;
@property (retain, nonatomic) SHManagedShazamCatalog *managedShazamCatalog; // ivar: _managedShazamCatalog
@property (nonatomic) BOOL sendNotifications;
@property (retain, nonatomic) SHSession *session; // ivar: _session


-(id)init;
-(id)initWithPartnerName:(id)arg0 ;
-(void)matchAmbientAudioSnippet;
-(void)matchAmbientAudioSnippetUntilDeadline:(id)arg0 ;
-(void)stopMatchingAmbientAudioSnippet;


@end


#endif
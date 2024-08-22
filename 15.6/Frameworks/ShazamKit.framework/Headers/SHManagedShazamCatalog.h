// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHMANAGEDSHAZAMCATALOG_H
#define SHMANAGEDSHAZAMCATALOG_H

@protocol SHMatcher;


#import "SHShazamCatalog.h"

@interface SHManagedShazamCatalog : SHShazamCatalog

@property (retain, nonatomic) NSObject<SHMatcher> *proxyMatcher; // ivar: _proxyMatcher
@property (nonatomic) BOOL sendNotifications; // ivar: _sendNotifications


-(id)_createMatcher;
-(id)_initWithInstallationID:(id)arg0 ;
-(id)init;
-(void)startMatching;
-(void)startMatchingUntilDeadline:(id)arg0 ;
-(void)startMatchingUntilResultFound;
-(void)startOneMatchAttempt;
-(void)stop;


@end


#endif
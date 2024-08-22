// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHBACKCOMPATMONTHLYCHALLENGELISTENER_H
#define ACHBACKCOMPATMONTHLYCHALLENGELISTENER_H

@class NSString, NSDictionary, HDProfile;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver;

#import <Foundation/Foundation.h>

#import "ACHTemplateStore.h"

@interface ACHBackCompatMonthlyChallengeListener : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *injectedKeyValuePairs; // ivar: _injectedKeyValuePairs
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (copy, nonatomic) id *readTemplatesBlock; // ivar: _readTemplatesBlock
@property (readonly) Class superclass;
@property (weak, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore


-(BOOL)_readAndSaveBackCompatDefinitions;
-(id)_definitionsFromKeyValuePairs:(id)arg0 ;
-(id)initWithProfile:(id)arg0 templateStore:(id)arg1 ;
-(void)_protectedNanoUserDefaultsDidSyncWithNotification:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDDIFFERENTIALPRIVACYREPORTER_H
#define EDDIFFERENTIALPRIVACYREPORTER_H

@class NSString;
@protocol EDMessageChangeHookResponder, EMUserProfileProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDMailDynamicDataAsset.h"
#import "_MSTTLReference.h"

@interface EDDifferentialPrivacyReporter : NSObject <EDMessageChangeHookResponder>



@property (retain, nonatomic) EDMailDynamicDataAsset *_mailDynamicData; // ivar: _mailDynamicData
@property (weak, nonatomic) NSObject<EMUserProfileProvider> *_profileProvider; // ivar: _profileProvider
@property (retain, nonatomic) NSString *_recordingKey; // ivar: _recordingKey
@property (retain, nonatomic) _MSTTLReference *_userDomains; // ivar: _userDomains
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *recordingHandler; // ivar: _recordingHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQueue; // ivar: _recordingQueue
@property (readonly) Class superclass;


-(BOOL)_isUserAccountDomain:(id)arg0 ;
-(BOOL)_shouldRecordMailbox:(id)arg0 ;
-(id)_localeIdentifier;
-(id)initWithUserProfileProvider:(id)arg0 ;
-(void)_recordSenders:(id)arg0 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)reportSenderDomainForMessages:(id)arg0 ;


@end


#endif
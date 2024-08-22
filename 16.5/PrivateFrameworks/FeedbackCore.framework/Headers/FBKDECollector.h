// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKDECOLLECTOR_H
#define FBKDECOLLECTOR_H

@class NSMutableSet, NSString, NSSet;
@protocol FBKAttachmentProvider, FBKFilerForm, FBKAttachmentListenerDelegate;

#import <Foundation/Foundation.h>

#import "FBKGroupedDevice.h"

@interface FBKDECollector : NSObject <FBKAttachmentProvider>



@property (retain) NSMutableSet *_attachments; // ivar: __attachments
@property BOOL alreadyHandledURL; // ivar: _alreadyHandledURL
@property (retain, nonatomic) NSString *bugSessionIdentifier; // ivar: _bugSessionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBKGroupedDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<FBKFilerForm> *form; // ivar: _form
@property (readonly) NSUInteger hash;
@property (weak) NSObject<FBKAttachmentListenerDelegate> *listener; // ivar: _listener
@property BOOL loadingBugSession; // ivar: _loadingBugSession
@property (retain) NSSet *sessionCapabilities; // ivar: _sessionCapabilities
@property (readonly) Class superclass;


+(id)bundleIDsFromAreas:(id)arg0 ;
+(id)parametersForGatheringExtension:(id)arg0 answers:(id)arg1 session:(id)arg2 givenParameters:(id)arg3 ;
+(id)parametersFromAnswers:(id)arg0 ;
-(BOOL)hasFilePromises;
-(BOOL)hasUnmetRequirements;
-(BOOL)isEqual:(id)arg0 ;
-(id)attachmentFromRequirement:(id)arg0 withExtension:(id)arg1 ;
-(id)attachmentFromRequirement:(id)arg0 withExtension:(id)arg1 urlExtension:(id)arg2 ;
-(id)attachments;
-(id)bugSession;
-(id)collectorError;
-(id)gatherFilesForExtension:(id)arg0 answers:(id)arg1 ;
-(id)identifier;
-(id)initWithRequirements:(id)arg0 forDevice:(id)arg1 filerForm:(id)arg2 extensionsFromURL:(id)arg3 listener:(id)arg4 shouldGetSessionStatus:(BOOL)arg5 shouldCheckDeferredLogs:(BOOL)arg6 ;
-(id)processAlreadyCollectedGroups:(id)arg0 withRequirements:(id)arg1 ;
-(id)processOngoingDECollections:(id)arg0 withRequirements:(id)arg1 isDeferred:(BOOL)arg2 ;
-(id)requirements;
-(void)_addAttachment:(id)arg0 ;
-(void)_didCollectGroup:(id)arg0 forAttachment:(id)arg1 ;
-(void)_removeAttachment:(id)arg0 ;
-(void)_updateAttachment:(id)arg0 withState:(NSInteger)arg1 ;
-(void)_updateAttachmentsWithRequirements:(id)arg0 alreadyCollectedGroups:(id)arg1 alreadyStartedCollections:(id)arg2 deferredCollections:(id)arg3 ;
-(void)cancelCollection:(id)arg0 ;
-(void)fetchTextDataOnMatcherPredicates:(id)arg0 completion:(id)arg1 ;
-(void)finishInitializationWithCollected:(id)arg0 device:(id)arg1 error:(id)arg2 form:(id)arg3 ongoing:(id)arg4 deferred:(id)arg5 requirements:(id)arg6 sessionCapabilities:(id)arg7 urlExtensions:(id)arg8 ;
-(void)gatherFilesForAttachment:(id)arg0 answers:(id)arg1 ;
-(void)processURLExtensions:(id)arg0 withMatcherPredicates:(id)arg1 ;
-(void)removeAllAttachments;
-(void)removeAttachment:(id)arg0 ;
-(void)updateRequirements:(id)arg0 ;


@end


#endif
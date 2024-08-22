// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBSERVERCONNECTION_H
#define PBSERVERCONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBServerConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *memberQ_serverConnection; // ivar: _memberQ_serverConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (readonly, nonatomic) NSXPCConnection *serverConnection;


+(NSUInteger)beginListeningToPasteboardChangeNotifications;
+(id)defaultConnection;
+(void)simulateCrashReportForAuthorizationWithAuthenticationMessage:(id)arg0 ;
-(NSUInteger)deletePersistentPasteboardWithName:(id)arg0 error:(*id)arg1 ;
-(id)init;
// -(id)localGeneralPasteboardWithAuthenticationBlock:(id)arg0 dataOwnerBlock:(unk)arg1 error:(id)arg2  ;
// -(id)pasteboardWithName:(id)arg0 createIfNeeded:(BOOL)arg1 authenticationBlock:(id)arg2 dataOwnerBlock:(unk)arg3 error:(id)arg4  ;
-(id)pasteboardWithName:(id)arg0 error:(*id)arg1 ;
-(id)remoteContentForLayerContextWithId:(NSUInteger)arg0 slotStyle:(id)arg1 pasteButtonTag:(id)arg2 error:(*id)arg3 ;
-(id)remoteContentForSlotStyle:(id)arg0 pasteButtonTag:(id)arg1 error:(*id)arg2 ;
-(id)requestSecurePasteAuthenticationMessageWithContext:(NSUInteger)arg0 forClientVersionedPID:(NSInteger)arg1 error:(*id)arg2 ;
-(id)savePasteboard:(id)arg0 dataProviderEndpoint:(id)arg1 error:(*id)arg2 ;
-(void)deletePersistentPasteboardWithName:(id)arg0 completionBlock:(id)arg1 ;
-(void)didPastePasteboard:(id)arg0 ;
-(void)getAllPasteboardsCompletionBlock:(id)arg0 ;
-(void)helloCompletionBlock:(id)arg0 ;
-(void)localGeneralPasteboardCompletionBlock:(id)arg0 ;
// -(void)localGeneralPasteboardWithAuthenticationBlock:(id)arg0 completionBlock:(unk)arg1  ;
// -(void)localGeneralPasteboardWithAuthenticationBlock:(id)arg0 dataOwnerBlock:(unk)arg1 completionBlock:(id)arg2  ;
-(void)pasteboardWithName:(id)arg0 completionBlock:(id)arg1 ;
// -(void)pasteboardWithName:(id)arg0 createIfNeeded:(BOOL)arg1 authenticationBlock:(id)arg2 dataOwnerBlock:(unk)arg3 completionBlock:(id)arg4  ;
-(void)performJanitorialTasksCompletionBlock:(id)arg0 ;
-(void)requestItemFromPasteboardWithName:(id)arg0 UUID:(id)arg1 authenticationMessage:(id)arg2 itemIndex:(NSUInteger)arg3 typeIdentifier:(id)arg4 dataOwner:(NSInteger)arg5 loadContext:(id)arg6 completionBlock:(id)arg7 ;
-(void)requestPatternDetectionsFromPasteboardWithName:(id)arg0 UUID:(id)arg1 authenticationMessage:(id)arg2 itemIndex:(NSUInteger)arg3 patterns:(id)arg4 needValues:(BOOL)arg5 dataOwner:(NSInteger)arg6 completionBlock:(id)arg7 ;
-(void)savePasteboard:(id)arg0 dataProviderEndpoint:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif
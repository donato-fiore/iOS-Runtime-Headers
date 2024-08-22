// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSHAREABLECONTENTEXTRACTOR_H
#define SWSHAREABLECONTENTEXTRACTOR_H

@class NSString, NSMutableArray, SLDServiceProxy;
@protocol SWShareableContentRepresentationProvider, SLDServiceProxyDelegate;

#import <Foundation/Foundation.h>


@interface SWShareableContentExtractor : NSObject <SWShareableContentRepresentationProvider, SLDServiceProxyDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *pendingContentExtractionRequests; // ivar: _pendingContentExtractionRequests
@property (retain, nonatomic) SLDServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


+(id)_buildStartCollaborationURLForContentSceneIdentifier:(id)arg0 recipients:(id)arg1 faceTimeConversationUUID:(id)arg2 ;
+(id)contentExtractorQueue;
-(id)init;
-(id)remoteService;
-(void)_addContentExtractionRequest:(id)arg0 ;
-(void)_processPendingContentExtractionRequests;
-(void)initiateBackgroundCollaborationForContent:(id)arg0 faceTimeConversation:(id)arg1 ;
-(void)initiateBackgroundCollaborationForContent:(id)arg0 recipients:(id)arg1 faceTimeConversationUUID:(id)arg2 ;
-(void)loadDataRepresentationForContent:(id)arg0 typeIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadInPlaceFileRepresentationForContent:(id)arg0 typeIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentMessageComposeSheetForContent:(id)arg0 completion:(id)arg1 ;
-(void)retrieveShareableContentWithCompletion:(id)arg0 ;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif
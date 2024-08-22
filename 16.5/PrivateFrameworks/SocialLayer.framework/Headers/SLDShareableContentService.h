// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDSHAREABLECONTENTSERVICE_H
#define SLDSHAREABLECONTENTSERVICE_H

@class NSUserActivity, NSString, FBSDisplayLayoutMonitor;
@protocol SLDService, SLDShareableContentServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SLDShareableContentService : NSObject <SLDService, SLDShareableContentServiceProtocol>



@property (retain, nonatomic) NSUserActivity *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLayoutMonitorReady; // ivar: _isLayoutMonitorReady
@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *retrieveShareableContentBlock; // ivar: _retrieveShareableContentBlock
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
+(void)setupInterface:(id)arg0 ;
-(BOOL)_connShouldAllowBackgroundCollaboration:(id)arg0 ;
-(BOOL)allowsConnection:(id)arg0 ;
-(BOOL)populateInitiatorMetadata:(id)arg0 name:(id)arg1 email:(id)arg2 ;
-(id)_applicationIdentifierForConnection:(id)arg0 ;
-(id)init;
-(id)visibleApplicationForSourceIdentifier:(id)arg0 ;
-(id)visibleApplications;
-(void)dealloc;
-(void)fetchShareableContentFromSourceIdentifier:(id)arg0 requestedTypeIdentifier:(id)arg1 responseHandler:(id)arg2 ;
-(void)launchApplicationWithBundleIdentifier:(id)arg0 forActions:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadDataRepresentationFromSourceIdentifier:(id)arg0 requestedTypeIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadInPlaceFileRepresentationFromSourceIdentifier:(id)arg0 requestedTypeIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)performAction:(id)arg0 onApplicationWithBundleIdentifier:(id)arg1 ;
-(void)populateInitiatorMetadata:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentMessageComposeSheetForSourceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)retrieveShareableContentMetadataWithCompletion:(id)arg0 ;
-(void)shareCollaborationData:(id)arg0 faceTimeConversationUUID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif
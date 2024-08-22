// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONPERFORMER_H
#define SFCOLLABORATIONPERFORMER_H

@class NSString;
@protocol SFCollaborationItem, SFCollaborationCreationDelegate, SFCollaborationPerformerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFCollaborationCloudSharingResult.h"

@interface SFCollaborationPerformer : NSObject

@property (readonly, copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult; // ivar: _cloudSharingResult
@property (readonly, nonatomic) NSObject<SFCollaborationItem> *collaborationItem; // ivar: _collaborationItem
@property (weak, nonatomic) NSObject<SFCollaborationCreationDelegate> *creationDelegate; // ivar: _creationDelegate
@property (weak, nonatomic) NSObject<SFCollaborationPerformerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat deviceScreenScale; // ivar: _deviceScreenScale
@property (nonatomic) BOOL didCancel; // ivar: _didCancel
@property (readonly, nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *performQueue; // ivar: _performQueue
@property (nonatomic) BOOL requiresParticipants; // ivar: _requiresParticipants


-(id)initWithCollaborationItem:(id)arg0 activityType:(id)arg1 context:(id)arg2 ;
-(id)initWithCollaborationItem:(id)arg0 activityType:(id)arg1 deviceScreenScale:(CGFloat)arg2 ;
-(id)initWithCollaborationItem:(id)arg0 activityType:(id)arg1 requiresParticipants:(BOOL)arg2 deviceScreenScale:(CGFloat)arg3 ;
-(void)_createCollaborationRequestWithCompletionHandler:(id)arg0 ;
-(void)_createSharingURLForCollaborationRequest:(id)arg0 ;
-(void)_didCreateCollaborationWithResult:(id)arg0 ;
-(void)_fetchCollaborationAppInfoIfNeeded:(id)arg0 ;
-(void)_handleSubitemInSharedFolder;
-(void)_handleUnsharedFolderWithSharedSubitems;
-(void)_performAfterFolderCheck;
-(void)_performWithAddParticipantsAllowed:(BOOL)arg0 ;
-(void)cancel;
-(void)perform;


@end


#endif
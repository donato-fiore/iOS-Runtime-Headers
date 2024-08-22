// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYMOCK_H
#define PXSHAREDLIBRARYMOCK_H

@class NSString, NSArray, NSURL;
@protocol PXSharedLibrary, PXSharedLibraryParticipant;

#import <Foundation/Foundation.h>

#import "PXSharedLibraryRule.h"

@interface PXSharedLibraryMock : NSObject <PXSharedLibrary>



@property (readonly, nonatomic) NSUInteger cloudItemCount; // ivar: _cloudItemCount
@property (readonly, nonatomic) NSUInteger cloudPhotoCount; // ivar: _cloudPhotoCount
@property (readonly, nonatomic) NSUInteger cloudVideoCount; // ivar: _cloudVideoCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isDeclined; // ivar: _isDeclined
@property (nonatomic) BOOL isExiting; // ivar: _isExiting
@property (readonly, nonatomic) BOOL isInLocalMode; // ivar: _isInLocalMode
@property (nonatomic) BOOL isInPreview; // ivar: _isInPreview
@property (nonatomic) BOOL isOwned; // ivar: _isOwned
@property (nonatomic) BOOL isPublished; // ivar: _isPublished
@property (copy, nonatomic) NSObject<PXSharedLibraryParticipant> *owner; // ivar: _owner
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (copy, nonatomic) PXSharedLibraryRule *rule; // ivar: _rule
@property (readonly, copy, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly) Class superclass;


-(BOOL)canAddParticipantsWithEmailAddresses:(id)arg0 phoneNumbers:(id)arg1 ;
-(BOOL)canDeleteParticipants:(id)arg0 ;
-(BOOL)canEditParticipants;
-(BOOL)canMoveAssetsToPersonalLibrary:(id)arg0 ;
-(BOOL)canMoveAssetsToSharedLibrary:(id)arg0 ;
-(BOOL)canRemoveAssetSharingSuggestions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)sourceLibraryInfo;
-(struct ? )fetchItemCounts;
-(void)acceptInvitationWithRule:(id)arg0 progress:(id)arg1 completion:(id)arg2 ;
-(void)addAssetSharingSuggestions:(id)arg0 completion:(id)arg1 ;
-(void)addParticipantsWithEmailAddresses:(id)arg0 phoneNumbers:(id)arg1 presentationEnvironment:(id)arg2 withCompletion:(id)arg3 ;
-(void)addPersonUUIDsToPersonCondition:(id)arg0 completion:(id)arg1 ;
-(void)declineInvitationWithCompletion:(id)arg0 ;
-(void)deleteParticipants:(id)arg0 presentationEnvironment:(id)arg1 withCompletion:(id)arg2 ;
-(void)exitPreviewWithPresentationEnvironment:(id)arg0 completion:(id)arg1 ;
-(void)exitWithRetentionPolicy:(NSInteger)arg0 presentationEnvironment:(id)arg1 progress:(id)arg2 completion:(id)arg3 ;
-(void)moveAssetsToPersonalLibrary:(id)arg0 completion:(id)arg1 ;
-(void)moveAssetsToSharedLibrary:(id)arg0 completion:(id)arg1 ;
-(void)moveAssetsWithLocalIdentifiersToSharedLibrary:(id)arg0 completion:(id)arg1 ;
-(void)previewInvitationWithRule:(id)arg0 progress:(id)arg1 completion:(id)arg2 ;
-(void)publishPreviewWithPresentationEnvironment:(id)arg0 progress:(id)arg1 completion:(id)arg2 ;
-(void)removeAssetSharingSuggestions:(id)arg0 completion:(id)arg1 ;
-(void)removePersonUUIDsFromPersonCondition:(id)arg0 completion:(id)arg1 ;
-(void)restoreDeclinedInvitationWithCompletion:(id)arg0 ;


@end


#endif
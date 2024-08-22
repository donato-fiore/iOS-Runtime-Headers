// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYPHOTOKIT_H
#define PXSHAREDLIBRARYPHOTOKIT_H

@class PHShareParticipant, PHFetchResult, NSString, PHLibraryScope, NSArray, NSURL;
@protocol PXPhotoLibraryUIChangeObserver, PXSharedLibrary, PXSharedLibraryParticipant;

#import <Foundation/Foundation.h>

#import "PXSharedLibraryRule.h"

@interface PXSharedLibraryPhotoKit : NSObject <PXPhotoLibraryUIChangeObserver, PXSharedLibrary>

 {
    PHShareParticipant *_owner;
    PHFetchResult *_participants;
    PXSharedLibraryRule *_rule;
}


@property (readonly, nonatomic) NSUInteger cloudItemCount;
@property (readonly, nonatomic) NSUInteger cloudPhotoCount;
@property (readonly, nonatomic) NSUInteger cloudVideoCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isDeclined;
@property (readonly, nonatomic) BOOL isExiting;
@property (readonly, nonatomic) BOOL isInLocalMode;
@property (readonly, nonatomic) BOOL isInPreview;
@property (readonly, nonatomic) BOOL isOwned;
@property (readonly, nonatomic) BOOL isPublished;
@property (readonly, nonatomic) PHLibraryScope *libraryScope; // ivar: _libraryScope
@property (readonly, copy, nonatomic) NSObject<PXSharedLibraryParticipant> *owner;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, copy, nonatomic) PXSharedLibraryRule *rule;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly) Class superclass;


-(BOOL)canAddParticipantsWithEmailAddresses:(id)arg0 phoneNumbers:(id)arg1 ;
-(BOOL)canDeleteParticipants:(id)arg0 ;
-(BOOL)canEditParticipants;
-(BOOL)canMoveAssetsToPersonalLibrary:(id)arg0 ;
-(BOOL)canMoveAssetsToSharedLibrary:(id)arg0 ;
-(BOOL)canRemoveAssetSharingSuggestions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLibraryScope:(id)arg0 ;
-(id)sourceLibraryInfo;
-(struct ? )fetchItemCounts;
-(void)_updateOwner;
-(void)_updateParticipants;
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
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)previewInvitationWithRule:(id)arg0 progress:(id)arg1 completion:(id)arg2 ;
-(void)publishPreviewWithPresentationEnvironment:(id)arg0 progress:(id)arg1 completion:(id)arg2 ;
-(void)removeAssetSharingSuggestions:(id)arg0 completion:(id)arg1 ;
-(void)removePersonUUIDsFromPersonCondition:(id)arg0 completion:(id)arg1 ;
-(void)restoreDeclinedInvitationWithCompletion:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTARCHIVERBASEDSTOREBACKEND_H
#define AVTARCHIVERBASEDSTOREBACKEND_H

@class NSDictionary, NSString, NSArray, NSURL;
@protocol AVTStoreBackend, AVTStoreBackendDelegate, AVTAvatarRecordChangeTracker;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"
#import "AVTArchiverBasedStoreRoot.h"

@interface AVTArchiverBasedStoreBackend : NSObject <AVTStoreBackend>



@property (copy, nonatomic) NSDictionary *avatarsByIdentifiers; // ivar: _avatarsByIdentifiers
@property (weak, nonatomic) NSObject<AVTStoreBackendDelegate> *backendDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVTArchiverBasedStoreRoot *model; // ivar: _model
@property (readonly, nonatomic) NSObject<AVTAvatarRecordChangeTracker> *recordChangeTracker;
@property (copy, nonatomic) NSArray *sortedAvatars; // ivar: _sortedAvatars
@property (readonly, copy, nonatomic) NSURL *storeLocation; // ivar: _storeLocation
@property (readonly) Class superclass;


+(id)classifyRecordsByIdentifiers:(id)arg0 ;
+(id)rootByRemovingAvatarWithIdentifier:(id)arg0 fromRoot:(id)arg1 ;
+(id)rootBySavingAvatarRecord:(id)arg0 afterAvatarRecord:(id)arg1 forDomainIdentifier:(id)arg2 toRoot:(id)arg3 ;
+(id)storeLocationForDomainIdentifier:(id)arg0 environment:(id)arg1 ;
-(BOOL)canCreateAvatarWithError:(*id)arg0 ;
-(BOOL)deleteAvatarWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadContentFromDisk:(*id)arg0 ;
-(BOOL)loadContentFromDiskIfNeeded:(*id)arg0 ;
-(BOOL)saveAvatar:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAvatars:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveModel:(id)arg0 logger:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)avatarCountWithError:(*id)arg0 ;
-(id)allAvatars;
-(id)avatarsExcludingIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)avatarsForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)avatarsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)duplicateAvatarRecord:(id)arg0 error:(*id)arg1 ;
-(id)initWithStoreLocation:(id)arg0 domainIdentifier:(id)arg1 environment:(id)arg2 ;
-(void)loadModel:(id)arg0 ;


@end


#endif
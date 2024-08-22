// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSHAREDALBUMSUBSCRIBERINFO_H
#define PXSHAREDALBUMSUBSCRIBERINFO_H

@class NSString, PLCloudSharedAlbumInvitationRecord;

#import <Foundation/Foundation.h>


@interface PXSharedAlbumSubscriberInfo : NSObject

@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *email; // ivar: _email
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord; // ivar: _invitationRecord
@property (readonly, nonatomic) BOOL isOwner; // ivar: _isOwner
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSString *phone; // ivar: _phone


+(id)_allSubscribersForAlbum:(id)arg0 includeMyself:(BOOL)arg1 ;
+(id)allSubscribersForAlbum:(id)arg0 ;
+(id)allSubscribersForAlbumWithObjectID:(id)arg0 includingCurrentUser:(BOOL)arg1 managedObjectContext:(id)arg2 ;
-(id)contactStore;
-(id)init;
-(id)initWithInvitationRecord:(id)arg0 identifier:(id)arg1 email:(id)arg2 phone:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 displayName:(id)arg6 isOwner:(BOOL)arg7 ;
-(id)matchingContactWithKeysToFetch:(id)arg0 outMatchingKey:(*id)arg1 outMatchingIdentifier:(*id)arg2 ;


@end


#endif
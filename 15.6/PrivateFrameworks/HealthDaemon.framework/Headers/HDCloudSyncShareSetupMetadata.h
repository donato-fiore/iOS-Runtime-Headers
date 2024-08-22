// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSHARESETUPMETADATA_H
#define HDCLOUDSYNCSHARESETUPMETADATA_H

@class NSDictionary, NSString, HKProfileIdentifier, CKShareParticipant, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDCloudSyncShareSetupMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURL; // ivar: _invitationTokensByShareURL
@property (readonly, copy, nonatomic) NSString *ownerCloudKitEmailAddress; // ivar: _ownerCloudKitEmailAddress
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // ivar: _profileIdentifier
@property (readonly, copy, nonatomic) CKShareParticipant *shareParticipant; // ivar: _shareParticipant
@property (readonly, copy, nonatomic) NSArray *shareURLs; // ivar: _shareURLs
@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier; // ivar: _syncCircleIdentifier


+(BOOL)supportsSecureCoding;
+(id)cloudSyncShareSetupMetadataWithCodableSharingSetupMetadata:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)codableSharingSetupMetadataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSyncCircleIdentifier:(id)arg0 profileIdentifier:(id)arg1 shareURLs:(id)arg2 ownerCloudKitEmailAddress:(id)arg3 shareParticipant:(id)arg4 invitationTokensByShareURL:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
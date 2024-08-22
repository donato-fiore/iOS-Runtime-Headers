// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALCOLLABORATION_H
#define PPSOCIALCOLLABORATION_H

@class NSString, NSDate, NSDictionary, NSData;


#import "PPSocialHighlight.h"

@interface PPSocialCollaboration : PPSocialHighlight

@property (readonly, nonatomic) NSString *collaborationIdentifier; // ivar: _collaborationIdentifier
@property (readonly, nonatomic) NSString *contentDisplayName; // ivar: _contentDisplayName
@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDictionary *earliestAttributionIdentifiers; // ivar: _earliestAttributionIdentifiers
@property (readonly, nonatomic) NSString *fileProviderId; // ivar: _fileProviderId
@property (readonly, nonatomic) NSData *handleToIdentityMap; // ivar: _handleToIdentityMap
@property (readonly, nonatomic) NSData *localIdentity; // ivar: _localIdentity
@property (readonly, nonatomic) NSData *localIdentityProof; // ivar: _localIdentityProof
@property (readonly, nonatomic) NSData *proofOfInclusionHashes; // ivar: _proofOfInclusionHashes
@property (readonly, nonatomic) NSData *proofOfInclusionLocalKeyHash; // ivar: _proofOfInclusionLocalKeyHash


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 resourceURL:(id)arg1 timestamp:(id)arg2 attributionIdentifiers:(id)arg3 supplementaryData:(id)arg4 collaborationIdentifier:(id)arg5 contentDisplayName:(id)arg6 contentCreationDate:(id)arg7 contentUTIType:(id)arg8 fileProviderId:(id)arg9 earliestAttributionIdentifiers:(id)arg10 localIdentity:(id)arg11 localIdentityProof:(id)arg12 handleToIdentityMap:(id)arg13 ;
-(id)initWithIdentifier:(id)arg0 resourceURL:(id)arg1 timestamp:(id)arg2 attributionIdentifiers:(id)arg3 supplementaryData:(id)arg4 collaborationIdentifier:(id)arg5 contentDisplayName:(id)arg6 contentCreationDate:(id)arg7 contentUTIType:(id)arg8 fileProviderId:(id)arg9 earliestAttributionIdentifiers:(id)arg10 localIdentity:(id)arg11 localIdentityProof:(id)arg12 handleToIdentityMap:(id)arg13 score:(id)arg14 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
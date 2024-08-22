// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLCOLLABORATIONHIGHLIGHT_H
#define SLCOLLABORATIONHIGHLIGHT_H

@class NSString, NSDate, NSDictionary, SWPersonIdentity, _SWPersonIdentityProof;


#import "SLHighlight.h"

@interface SLCollaborationHighlight : SLHighlight

@property (readonly, copy, nonatomic) NSString *collaborationIdentifier; // ivar: _collaborationIdentifier
@property (readonly, copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDictionary *earliestAttributionIdentifiers; // ivar: _earliestAttributionIdentifiers
@property (readonly, copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSString *fileProviderID; // ivar: _fileProviderID
@property (readonly, copy, nonatomic) NSDictionary *handleToIdentityMap; // ivar: _handleToIdentityMap
@property (readonly, copy, nonatomic) SWPersonIdentity *localIdentity; // ivar: _localIdentity
@property (readonly, copy, nonatomic) _SWPersonIdentityProof *localProofOfInclusion; // ivar: _localProofOfInclusion


+(BOOL)supportsSecureCoding;
+(id)errorForCollaborationHighlightDomain:(id)arg0 andCode:(NSInteger)arg1 andUnderlyingError:(*id)arg2 ;
+(id)requiredSpotlightAttributeKeysforHighlightType:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAttribution:(id)arg0 ;
-(id)initWithCSSearchableItem:(id)arg0 error:(*id)arg1 ;
-(id)initWithCSSearchableItemUniqueIdentifier:(id)arg0 forContentType:(unsigned char)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPortraitCollaborationHighlight:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCOLLABORATIONHIGHLIGHT_H
#define SWCOLLABORATIONHIGHLIGHT_H

@class NSString, UTType, NSDate, NSDictionary, SWPersonIdentity, SWPersonIdentityProof, SLCollaborationHighlight;
@protocol NSSecureCoding, NSCopying;


#import "SWHighlight.h"

@interface SWCollaborationHighlight : SWHighlight <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *collaborationIdentifier; // ivar: _collaborationIdentifier
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDictionary *earliestAttributionIdentifiers;
@property (readonly, nonatomic) NSString *fileProviderID;
@property (readonly, copy, nonatomic) NSDictionary *handleToIdentityMap;
@property (readonly, nonatomic) unsigned char highlightType; // ivar: _highlightType
@property (readonly, copy, nonatomic) SWPersonIdentity *localIdentity;
@property (readonly, nonatomic) SWPersonIdentityProof *localProofOfInclusion;
@property (readonly, nonatomic) SLCollaborationHighlight *slCollaborationHighlight; // ivar: _slCollaborationHighlight
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) UTType *type;


+(BOOL)supportsSecureCoding;
+(id)requiredSpotlightAttributeKeysforHighlightType:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URL;
-(id)attributions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCSSearchableItem:(id)arg0 error:(*id)arg1 ;
-(id)initWithCSSearchableItemUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithCSSearchableItemUniqueIdentifier:(id)arg0 forType:(unsigned char)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSLCollaborationHighlight:(id)arg0 ;
-(id)initWithSLCollaborationHighlight:(id)arg0 andType:(unsigned char)arg1 ;
-(id)timestamp;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
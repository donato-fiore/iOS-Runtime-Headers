// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLATTRIBUTION_H
#define SLATTRIBUTION_H

@class NSString, _SWCollaborationMetadata, NSUUID, NSURL, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SLPerson.h"

@interface SLAttribution : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *attachmentGUID; // ivar: _attachmentGUID
@property (readonly, nonatomic) _SWCollaborationMetadata *collaborationMetadata; // ivar: _collaborationMetadata
@property (readonly, copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe; // ivar: _fromMe
@property (readonly, copy, nonatomic) NSString *groupDisplayName; // ivar: _groupDisplayName
@property (readonly, nonatomic) NSUUID *groupID; // ivar: _groupID
@property (readonly, copy, nonatomic) NSURL *groupPhotoPath; // ivar: _groupPhotoPath
@property (readonly, nonatomic) BOOL isGroupConversation; // ivar: _isGroupConversation
@property (getter=isLean) BOOL lean; // ivar: _lean
@property (readonly, nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (readonly, nonatomic) NSArray *relatedPersons; // ivar: _relatedPersons
@property (readonly, nonatomic) SLPerson *sender; // ivar: _sender
@property (readonly, copy, nonatomic) NSString *sourceAppDisplayName; // ivar: _sourceAppDisplayName
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)errorForAttributionDomain:(id)arg0 andCode:(NSInteger)arg1 andUnderlyingError:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCSSearchableItem:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithPortraitAttribution:(id)arg0 error:(*id)arg1 ;
-(id)portraitAttribution;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
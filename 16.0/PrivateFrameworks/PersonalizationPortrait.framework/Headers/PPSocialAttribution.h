// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALATTRIBUTION_H
#define PPSOCIALATTRIBUTION_H

@class NSData, NSString, NSURL, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PPSocialPerson.h"

@interface PPSocialAttribution : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *collaborationMetadata; // ivar: _collaborationMetadata
@property (readonly, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe; // ivar: _fromMe
@property (readonly, nonatomic) NSString *groupDisplayName; // ivar: _groupDisplayName
@property (readonly, nonatomic) NSString *groupId; // ivar: _groupId
@property (readonly, nonatomic) NSURL *groupPhotoPath; // ivar: _groupPhotoPath
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *relatedPeople; // ivar: _relatedPeople
@property (readonly, nonatomic) PPSocialPerson *sender; // ivar: _sender
@property (readonly, nonatomic) NSString *sourceAppDisplayName; // ivar: _sourceAppDisplayName
@property (readonly, nonatomic, getter=isStarred) BOOL starred; // ivar: _starred
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sourceAppDisplayName:(id)arg1 conversationIdentifier:(id)arg2 groupPhotoPath:(id)arg3 groupDisplayName:(id)arg4 groupId:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8 collaborationMetadata:(id)arg9 starred:(BOOL)arg10 fromMe:(BOOL)arg11 ;
-(id)initWithIdentifier:(id)arg0 sourceAppDisplayName:(id)arg1 conversationIdentifier:(id)arg2 groupPhotoPath:(id)arg3 groupDisplayName:(id)arg4 relatedPeople:(id)arg5 sender:(id)arg6 timestamp:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 sourceAppDisplayName:(id)arg1 conversationIdentifier:(id)arg2 groupPhotoPath:(id)arg3 groupDisplayName:(id)arg4 relatedPeople:(id)arg5 sender:(id)arg6 timestamp:(id)arg7 collaborationMetadata:(id)arg8 starred:(BOOL)arg9 fromMe:(BOOL)arg10 ;
-(id)initWithIdentifier:(id)arg0 sourceAppDisplayName:(id)arg1 conversationIdentifier:(id)arg2 groupPhotoPath:(id)arg3 groupDisplayName:(id)arg4 relatedPeople:(id)arg5 sender:(id)arg6 timestamp:(id)arg7 starred:(BOOL)arg8 ;
-(id)initWithIdentifier:(id)arg0 sourceAppDisplayName:(id)arg1 conversationIdentifier:(id)arg2 groupPhotoPath:(id)arg3 groupDisplayName:(id)arg4 relatedPeople:(id)arg5 sender:(id)arg6 timestamp:(id)arg7 starred:(BOOL)arg8 fromMe:(BOOL)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
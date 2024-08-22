// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLCOLLABORATIONATTRIBUTIONCONVERSATIONDRAWINGMETADATA_H
#define SLCOLLABORATIONATTRIBUTIONCONVERSATIONDRAWINGMETADATA_H

@class NSString, NSURL, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLCollaborationAttributionConversationDrawingMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSURL *groupPhotoFileURL; // ivar: _groupPhotoFileURL
@property (readonly, nonatomic) BOOL isGroupConversation; // ivar: _isGroupConversation
@property (readonly, nonatomic) NSArray *recipientDrawingMetadata; // ivar: _recipientDrawingMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupPhotoFileURL:(id)arg0 recipientDrawingMetadata:(id)arg1 groupID:(id)arg2 ;
-(id)initWithRecipientDrawingMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
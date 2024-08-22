// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGESYNDICATIONACTION_H
#define IMMESSAGESYNDICATIONACTION_H



#import "IMSyndicationAction.h"
#import "IMMessagePartGUID.h"

@interface IMMessageSyndicationAction : IMSyndicationAction

@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, copy, nonatomic) IMMessagePartGUID *messagePartGUID; // ivar: _messagePartGUID
@property (readonly, nonatomic) _NSRange messagePartRange; // ivar: _messagePartRange
@property (readonly, nonatomic) NSInteger messagePartSyndicationStatus;
@property (readonly, nonatomic) NSInteger messagePartSyndicationType;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 syndicationActionType:(unsigned char)arg2 encodedMessagePartGUID:(id)arg3 messagePartRange:(struct _NSRange )arg4 ;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 syndicationActionType:(unsigned char)arg2 encodedMessagePartGUID:(id)arg3 messagePartRange:(struct _NSRange )arg4 version:(unsigned char)arg5 ;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 syndicationActionType:(unsigned char)arg2 messagePartGUID:(id)arg3 messagePartRange:(struct _NSRange )arg4 ;
-(id)initWithChatGUID:(id)arg0 syndicationStartDate:(id)arg1 syndicationActionType:(unsigned char)arg2 messagePartGUID:(id)arg3 messagePartRange:(struct _NSRange )arg4 version:(unsigned char)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(unsigned char)syndicatedItemType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
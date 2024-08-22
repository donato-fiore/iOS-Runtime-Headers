// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTRANSCRIPTCHATITEM_H
#define IMTRANSCRIPTCHATITEM_H

@class NSString, NSDate, NSAttributedString;
@protocol IMChatTranscriptItem;


#import "IMChatItem.h"
#import "IMChatContext.h"
#import "IMHandle.h"
#import "IMServiceImpl.h"

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem>



@property (readonly, nonatomic) unsigned char attachmentContiguousType; // ivar: _attachmentContiguousType
@property (copy, nonatomic) IMChatContext *chatContext; // ivar: _chatContext
@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property (readonly, nonatomic) BOOL contiguousLoaded; // ivar: _contiguousLoaded
@property (readonly, nonatomic) unsigned char contiguousType; // ivar: _contiguousType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (copy, nonatomic, setter=_setGUID:) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *layoutGroupIdentifier;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *transcriptDate;
@property (readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property (readonly, nonatomic) BOOL wantsTail;


-(BOOL)isAttachmentContiguousWithChatItem:(id)arg0 ;
-(BOOL)isContiguousWithChatItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
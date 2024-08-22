// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGESTATUSCHATITEM_H
#define IMMESSAGESTATUSCHATITEM_H

@class NSDate, NSString, NSAttributedString;
@protocol IMChatTranscriptStatusItem;


#import "IMTranscriptChatItem.h"
#import "IMHandle.h"
#import "IMServiceImpl.h"

@interface IMMessageStatusChatItem : IMTranscriptChatItem <IMChatTranscriptStatusItem>

 {
    NSDate *_timeAdded;
    NSDate *_timeStale;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSDate *dateOfStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *errorText;
@property (readonly, nonatomic) NSInteger expireStatusType; // ivar: _expireStatusType
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSInteger messageStatusType;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) NSInteger statusType; // ivar: _statusType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *time; // ivar: _time
@property (readonly, nonatomic) NSDate *transcriptDate;
@property (readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property (readonly, nonatomic) BOOL wantsTail;


-(id)_initWithItem:(id)arg0 expireStatusType:(NSInteger)arg1 count:(NSUInteger)arg2 ;
-(id)_initWithItem:(id)arg0 statusType:(NSInteger)arg1 time:(id)arg2 count:(NSUInteger)arg3 ;
-(id)_initWithItem:(id)arg0 statusType:(NSInteger)arg1 time:(id)arg2 count:(NSUInteger)arg3 expireStatusType:(NSInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
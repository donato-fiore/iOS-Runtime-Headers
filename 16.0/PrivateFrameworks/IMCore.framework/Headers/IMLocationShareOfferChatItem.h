// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMLOCATIONSHAREOFFERCHATITEM_H
#define IMLOCATIONSHAREOFFERCHATITEM_H

@class NSString, NSDate;
@protocol IMMessageChatItem;


#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem>



@property (readonly, nonatomic) BOOL actionableEclipsed; // ivar: _actionableEclipsed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL failed;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSInteger offerState;
@property (readonly, nonatomic) IMHandle *sender; // ivar: _sender
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *time;


-(BOOL)_isActionableEclipsed;
-(id)_initWithItem:(id)arg0 sender:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
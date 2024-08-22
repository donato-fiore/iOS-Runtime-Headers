// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMAGGREGATEACKNOWLEDGMENTCHATITEM_H
#define IMAGGREGATEACKNOWLEDGMENTCHATITEM_H

@class NSArray;


#import "IMAssociatedMessageChatItem.h"
#import "IMMessageAcknowledgmentChatItem.h"

@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSArray *acknowledgments; // ivar: _acknowledgments
@property (readonly, nonatomic) IMMessageAcknowledgmentChatItem *fromMeAcknowledgement; // ivar: _fromMeAcknowledgement
@property (readonly, nonatomic) BOOL includesFromMe;
@property (readonly, nonatomic) BOOL includesMultiple; // ivar: _includesMultiple
@property (readonly, nonatomic) NSInteger latestAcknowledgmentType; // ivar: _latestAcknowledgmentType
@property (readonly, nonatomic) BOOL latestIsFromMe; // ivar: _latestIsFromMe


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAcknowledgments:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
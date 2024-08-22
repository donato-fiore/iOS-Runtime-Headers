// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMOMENTSHARESTATUSCHATITEM_H
#define IMMOMENTSHARESTATUSCHATITEM_H

@class NSString, NSDate;


#import "IMTranscriptChatItem.h"

@interface IMMomentShareStatusChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) NSString *activityTitle; // ivar: _activityTitle
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


+(id)_guidForItem:(id)arg0 ;
-(BOOL)_isEqualToGuid:(id)arg0 activityTitle:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFromMe;
-(BOOL)wouldBeEqualIfInitializedWithItem:(id)arg0 activityTitle:(id)arg1 expirationDate:(id)arg2 ;
-(NSUInteger)hash;
-(id)_initWithItem:(id)arg0 activityTitle:(id)arg1 expirationDate:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
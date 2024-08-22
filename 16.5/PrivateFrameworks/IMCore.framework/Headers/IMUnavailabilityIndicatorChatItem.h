// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMUNAVAILABILITYINDICATORCHATITEM_H
#define IMUNAVAILABILITYINDICATORCHATITEM_H

@class NSHashTable;


#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMUnavailabilityIndicatorChatItem : IMTranscriptChatItem

@property (nonatomic) BOOL displayNotifyAnywayButton; // ivar: _displayNotifyAnywayButton
@property (readonly, nonatomic) IMHandle *handle; // ivar: _handle
@property (retain, nonatomic) NSHashTable *unavailabilityIndicatorChatItemDelegates; // ivar: _unavailabilityIndicatorChatItemDelegates


-(id)_initWithHandle:(id)arg0 displayNotifyAnywayButton:(BOOL)arg1 ;
-(void)_notifyDelegatesOfStateChange;
-(void)addUnavailabilityIndicatorChatItemDelegate:(id)arg0 ;


@end


#endif
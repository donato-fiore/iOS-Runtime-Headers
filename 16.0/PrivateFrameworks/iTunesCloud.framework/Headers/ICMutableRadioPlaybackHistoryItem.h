// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMUTABLERADIOPLAYBACKHISTORYITEM_H
#define ICMUTABLERADIOPLAYBACKHISTORYITEM_H

@class NSDate, NSNumber, NSDictionary;


#import "ICRadioPlaybackHistoryItem.h"

@interface ICMutableRadioPlaybackHistoryItem : ICRadioPlaybackHistoryItem

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSNumber *pauseTime;
@property (copy, nonatomic) NSDictionary *serverTrackInfo;
@property (copy, nonatomic) NSDate *skipDate;
@property (nonatomic) NSInteger storeIdentifier;




@end


#endif
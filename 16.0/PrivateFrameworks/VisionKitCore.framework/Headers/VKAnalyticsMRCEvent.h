// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKANALYTICSMRCEVENT_H
#define VKANALYTICSMRCEVENT_H

@class NSString;


#import "VKAnalyticsEvent.h"

@interface VKAnalyticsMRCEvent : VKAnalyticsEvent

@property (nonatomic) NSInteger _dataType; // ivar: __dataType
@property (retain, nonatomic) NSString *barcodeSymbology; // ivar: _barcodeSymbology
@property (readonly, nonatomic) NSInteger dataType;
@property (nonatomic) NSInteger eventType; // ivar: _eventType


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithElement:(id)arg0 eventType:(NSInteger)arg1 customIdentifier:(id)arg2 ;


@end


#endif
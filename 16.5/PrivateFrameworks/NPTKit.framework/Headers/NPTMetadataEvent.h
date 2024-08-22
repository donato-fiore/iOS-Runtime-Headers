// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTMETADATAEVENT_H
#define NPTMETADATAEVENT_H

@class NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface NPTMetadataEvent : NSObject

@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (retain, nonatomic) Class collectorType; // ivar: _collectorType
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) CGFloat timeSinceStart; // ivar: _timeSinceStart
@property (retain, nonatomic) NSDate *timeStamp; // ivar: _timeStamp


-(id)initWithType:(Class)arg0 eventType:(int)arg1 timeStamp:(id)arg2 data:(id)arg3 ;


@end


#endif
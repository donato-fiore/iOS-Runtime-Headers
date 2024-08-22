// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMEEVENTINFO_H
#define HMEEVENTINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HMEEvent.h"

@interface HMEEventInfo : NSObject

@property (readonly, nonatomic) HMEEvent *event; // ivar: _event
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


+(id)eventInfoFromProtoData:(id)arg0 ;
+(id)eventsMapFromEventInfos:(id)arg0 ;
+(id)eventsMapFromProtoEvents:(id)arg0 ;
+(id)fromProtobuff:(id)arg0 ;
-(id)description;
-(id)initWithEvent:(id)arg0 topic:(id)arg1 ;
-(id)pbEventInfo;


@end


#endif
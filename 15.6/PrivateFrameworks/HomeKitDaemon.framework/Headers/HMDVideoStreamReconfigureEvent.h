// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDVIDEOSTREAMRECONFIGUREEVENT_H
#define HMDVIDEOSTREAMRECONFIGUREEVENT_H

@class HMFObject, NSDate;



@interface HMDVideoStreamReconfigureEvent : HMFObject

@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithEventType:(NSUInteger)arg0 ;


@end


#endif
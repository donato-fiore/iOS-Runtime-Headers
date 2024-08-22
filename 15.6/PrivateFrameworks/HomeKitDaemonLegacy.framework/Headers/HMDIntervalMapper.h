// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDINTERVALMAPPER_H
#define HMDINTERVALMAPPER_H

@class HMFObject;



@interface HMDIntervalMapper : HMFObject



+(id)unsignedClosedOpenFixedIntervalMapper:(id)arg0 ;
+(id)unsignedOpenClosedFixedIntervalMapper:(id)arg0 ;
-(id)intervalForValue:(NSUInteger)arg0 ;
-(id)intervalIndexForValue:(NSUInteger)arg0 ;


@end


#endif
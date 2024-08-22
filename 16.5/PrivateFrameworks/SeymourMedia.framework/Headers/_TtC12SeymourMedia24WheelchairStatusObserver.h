// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SEYMOURMEDIA24WHEELCHAIRSTATUSOBSERVER_H
#define _TTC12SEYMOURMEDIA24WHEELCHAIRSTATUSOBSERVER_H

@class SwiftObject;
@protocol _HKWheelchairUseCharacteristicCacheObserver;



@interface _TtC12SeymourMedia24WheelchairStatusObserver : SwiftObject <_HKWheelchairUseCharacteristicCacheObserver>

 {
    ? status;
    ? eventHub;
}




-(void)wheelchairUseCharacteristicCache:(id)arg0 wheelchairUsageDidChange:(BOOL)arg1 ;


@end


#endif
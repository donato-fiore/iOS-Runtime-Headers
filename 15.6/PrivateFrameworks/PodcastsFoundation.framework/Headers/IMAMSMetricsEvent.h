// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAMSMETRICSEVENT_H
#define IMAMSMETRICSEVENT_H

@class AMSMetricsEvent, NSString;



@interface IMAMSMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *pageType;


-(id)eventType;
-(id)init;
-(void)setEventType:(id)arg0 ;


@end


#endif
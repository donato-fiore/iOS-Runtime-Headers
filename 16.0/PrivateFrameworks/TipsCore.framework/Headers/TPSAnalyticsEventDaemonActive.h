// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTDAEMONACTIVE_H
#define TPSANALYTICSEVENTDAEMONACTIVE_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    BOOL _alreadyRunning;
}


@property (retain, nonatomic) NSString *reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
+(id)eventWithReason:(id)arg0 alreadyRunning:(BOOL)arg1 ;
-(id)_initWithReason:(id)arg0 alreadyRunning:(BOOL)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
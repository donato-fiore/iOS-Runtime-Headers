// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTCREPORTINGDEALLOCNOTIFIER_H
#define RTCREPORTINGDEALLOCNOTIFIER_H

@protocol RTCReportingDeallocNotifierDelegate;

#import <Foundation/Foundation.h>


@interface RTCReportingDeallocNotifier : NSObject {
    id<RTCReportingDeallocNotifierDelegate> *_delegate;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif
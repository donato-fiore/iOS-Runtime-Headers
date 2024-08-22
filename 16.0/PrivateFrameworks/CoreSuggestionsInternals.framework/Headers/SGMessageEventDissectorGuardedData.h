// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMESSAGEEVENTDISSECTORGUARDEDDATA_H
#define SGMESSAGEEVENTDISSECTORGUARDEDDATA_H

@class NSDate, NSNumber, _PASLazyPurgeableResult;

#import <Foundation/Foundation.h>


@interface SGMessageEventDissectorGuardedData : NSObject {
    NSDate *_lastWindowStartTime;
    NSNumber *_currentAllowedMessageCount;
    _PASLazyPurgeableResult *_eventClassifierModel;
}






@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXEVENTTRAVELTIMEDATASOURCEINTERNAL_H
#define ATXEVENTTRAVELTIMEDATASOURCEINTERNAL_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface ATXEventTravelTimeDataSourceInternal : NSObject {
    _PASLock *_hypothesizerCacheLock;
}




+(id)sharedInstance;
-(id)init;
-(void)travelTimeInfoForEventID:(id)arg0 location:(id)arg1 expectedArrivalDate:(id)arg2 transportType:(id)arg3 localOnlyAfterFirstUpdate:(BOOL)arg4 callback:(id)arg5 ;


@end


#endif
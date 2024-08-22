// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMECONNECTIONINFOITEM_H
#define HMECONNECTIONINFOITEM_H

@class NSDate, NSUUID;

#import <Foundation/Foundation.h>

#import "HMEPendingEventsCollection.h"

@interface HMEConnectionInfoItem : NSObject

@property (weak, nonatomic) id *connection; // ivar: _connection
@property (retain, nonatomic) NSDate *debounceStartTime; // ivar: _debounceStartTime
@property (retain, nonatomic) NSDate *expiry; // ivar: _expiry
@property (nonatomic) BOOL hasPendingRequest; // ivar: _hasPendingRequest
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) HMEPendingEventsCollection *pendingCachedEventItems; // ivar: _pendingCachedEventItems
@property (readonly, nonatomic) HMEPendingEventsCollection *pendingEventItems; // ivar: _pendingEventItems


-(id)initWithConnection:(id)arg0 expiry:(id)arg1 ;


@end


#endif
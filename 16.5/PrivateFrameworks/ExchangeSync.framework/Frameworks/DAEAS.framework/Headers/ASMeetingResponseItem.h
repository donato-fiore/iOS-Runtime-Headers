// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASMEETINGRESPONSEITEM_H
#define ASMEETINGRESPONSEITEM_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "ASEventUID.h"

@interface ASMeetingResponseItem : NSObject

@property (retain, nonatomic) NSString *calEventServerId; // ivar: _calEventServerId
@property (retain, nonatomic) NSString *comment; // ivar: _comment
@property (retain, nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) NSString *deliveryItemFolderId; // ivar: _deliveryItemFolderId
@property (retain, nonatomic) NSString *deliveryItemServerId; // ivar: _deliveryItemServerId
@property (retain, nonatomic) ASEventUID *eventUID; // ivar: _eventUID
@property (retain, nonatomic) NSDate *instanceDate; // ivar: _instanceDate
@property (nonatomic) int meetingResponse; // ivar: _meetingResponse
@property (retain, nonatomic) NSDate *proposedEndTime; // ivar: _proposedEndTime
@property (retain, nonatomic) NSDate *proposedStartTime; // ivar: _proposedStartTime
@property (nonatomic) BOOL responseRequested; // ivar: _responseRequested
@property (nonatomic) NSInteger status; // ivar: _status


-(id)description;
-(id)initWithDeliveryItemFolderId:(id)arg0 deliveryItemServerId:(id)arg1 instanceDate:(id)arg2 meetingResponse:(int)arg3 eventUID:(id)arg4 responseComment:(id)arg5 responseRequested:(BOOL)arg6 proposedStartTime:(id)arg7 proposedEndTime:(id)arg8 ;


@end


#endif
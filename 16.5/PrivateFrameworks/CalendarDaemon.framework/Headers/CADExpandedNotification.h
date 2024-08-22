// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADEXPANDEDNOTIFICATION_H
#define CADEXPANDEDNOTIFICATION_H

@class CADObjectID;


#import "CADNotification.h"

@interface CADExpandedNotification : CADNotification

@property (retain, nonatomic) CADObjectID *attendeeObjectID; // ivar: _attendeeObjectID


-(BOOL)expanded;
-(id)initWithType:(int)arg0 objectID:(id)arg1 occurrenceDate:(CGFloat)arg2 expirationDate:(CGFloat)arg3 attendeeObjectID:(id)arg4 ;


@end


#endif
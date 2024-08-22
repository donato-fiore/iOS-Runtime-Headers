// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOREQUESTRESPONSEPERSISTEDEVENT_H
#define GEOREQUESTRESPONSEPERSISTEDEVENT_H

@class PBCodable, NSString, NSURL, NSData, NSDate;

#import <Foundation/Foundation.h>

#import "GEORRRequestResponseEvent.h"

@interface GEORequestResponsePersistedEvent : NSObject {
    GEORRRequestResponseEvent *_event;
    PBCodable *_decodedMessage;
}


@property (readonly, nonatomic) PBCodable *decodedMessage;
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSURL *eventFileURL; // ivar: _eventFileURL
@property (readonly, nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) int messageType; // ivar: _messageType
@property (readonly, nonatomic) NSData *rawMessage;
@property (readonly, nonatomic) GEORRRequestResponseEvent *rrEvent;
@property (readonly, nonatomic) NSURL *serviceURL; // ivar: _serviceURL
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)enumeratorBlockHelper:(SEL)arg0 ;


@end


#endif
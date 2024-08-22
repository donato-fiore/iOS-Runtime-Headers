// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBASEBANDMAVLOGMESSAGE_H
#define PLBASEBANDMAVLOGMESSAGE_H

@class NSString, NSData;


#import "PLBasebandMessage.h"

@interface PLBasebandMavLogMessage : PLBasebandMessage

@property (readonly) unsigned int eventCode; // ivar: _eventCode
@property (readonly) NSString *eventCodeString; // ivar: _eventCodeString
@property *_PLBasebandLogHeader header; // ivar: _header
@property (retain) NSData *payload; // ivar: _payload


-(BOOL)parseData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)stringForUnknownBytes:(unsigned int)arg0 ;
-(id)tooShortErrorString;
-(void)logWithLogger:(id)arg0 ;


@end


#endif
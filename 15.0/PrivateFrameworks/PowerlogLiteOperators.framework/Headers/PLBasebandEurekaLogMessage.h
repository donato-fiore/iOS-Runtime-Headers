// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBASEBANDEUREKALOGMESSAGE_H
#define PLBASEBANDEUREKALOGMESSAGE_H

@class NSData;


#import "PLBasebandMessage.h"

@interface PLBasebandEurekaLogMessage : PLBasebandMessage

@property (readonly) unsigned int eventCode;
@property *_PLBasebandLogHeader header; // ivar: _header
@property (retain) NSData *payload; // ivar: _payload


-(id)initWithData:(id)arg0 ;
-(id)stringForUnknownBytes:(unsigned int)arg0 ;
-(id)tooShortErrorString;
-(void)logWithLogger:(id)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif
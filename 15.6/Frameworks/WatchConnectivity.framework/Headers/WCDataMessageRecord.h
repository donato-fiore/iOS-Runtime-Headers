// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCDATAMESSAGERECORD_H
#define WCDATAMESSAGERECORD_H



#import "WCMessageRecord.h"

@interface WCDataMessageRecord : WCMessageRecord

@property (readonly, copy) id *responseHandler; // ivar: _responseHandler


-(BOOL)expectsResponse;
-(id)description;
// -(id)initWithIdentifier:(id)arg0 responseHandler:(id)arg1 errorHandler:(unk)arg2  ;


@end


#endif
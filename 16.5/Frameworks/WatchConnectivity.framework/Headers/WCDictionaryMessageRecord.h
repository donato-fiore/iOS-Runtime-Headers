// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCDICTIONARYMESSAGERECORD_H
#define WCDICTIONARYMESSAGERECORD_H



#import "WCMessageRecord.h"

@interface WCDictionaryMessageRecord : WCMessageRecord

@property (readonly, copy) id *responseHandler; // ivar: _responseHandler


-(BOOL)expectsResponse;
-(id)description;
// -(id)initWithIdentifier:(id)arg0 responseHandler:(id)arg1 errorHandler:(unk)arg2  ;


@end


#endif
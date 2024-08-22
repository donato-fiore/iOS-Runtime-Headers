// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPTLVSIGNEDNUMBERVALUE_H
#define HAPTLVSIGNEDNUMBERVALUE_H



#import "HAPTLVNumberValueBase.h"

@interface HAPTLVSignedNumberValue : HAPTLVNumberValueBase



+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(id)_parseFromData:(char *)arg0 length:(NSUInteger)arg1 status:(*int)arg2 ;
-(id)_serialize;
-(id)description;


@end


#endif
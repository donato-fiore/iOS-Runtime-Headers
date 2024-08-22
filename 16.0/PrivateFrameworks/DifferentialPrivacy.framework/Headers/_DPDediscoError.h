// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPDEDISCOERROR_H
#define _DPDEDISCOERROR_H

@class NSError;



@interface _DPDediscoError : NSError



+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 description:(id)arg2 ;
-(id)initWithCode:(NSInteger)arg0 description:(id)arg1 ;
-(id)initWithCode:(NSInteger)arg0 underlyingError:(id)arg1 description:(id)arg2 ;


@end


#endif
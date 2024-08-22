// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSRESPONSEERROR_H
#define TPSRESPONSEERROR_H

@class NSError;



@interface TPSResponseError : NSError



+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
-(id)initWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)initWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFCERROR_H
#define NFCERROR_H

@class NSError;



@interface NFCError : NSError



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)initWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;


@end


#endif
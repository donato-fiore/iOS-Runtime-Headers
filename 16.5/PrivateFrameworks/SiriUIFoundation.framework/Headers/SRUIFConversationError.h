// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFCONVERSATIONERROR_H
#define SRUIFCONVERSATIONERROR_H

@class NSError;



@interface SRUIFConversationError : NSError



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 localizedFailureReason:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)initWithCode:(NSInteger)arg0 ;
-(id)initWithCode:(NSInteger)arg0 localizedFailureReason:(id)arg1 ;
-(id)initWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSENDEMAIL_H
#define MSSENDEMAIL_H



#import "MSMailDefaultService.h"

@interface MSSendEmail : MSMailDefaultService



+(id)sendEmail:(id)arg0 playSound:(BOOL)arg1 completionBlock:(id)arg2 ;
+(id)sendEmail:(id)arg0 playSound:(BOOL)arg1 timeout:(CGFloat)arg2 error:(*id)arg3 ;
+(id)sendMessageData:(id)arg0 autosaveIdentifier:(id)arg1 completionBlock:(id)arg2 ;
-(void)_sendEmail:(id)arg0 playSound:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)_sendMessageData:(id)arg0 autosaveIdentifier:(id)arg1 completionBlock:(id)arg2 ;
-(void)_simulateServicesMethod:(id)arg0 arguments:(id)arg1 callback:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSENDMAILTASK_H
#define ASSENDMAILTASK_H

@class NSData, NSString;


#import "ASTask.h"

@interface ASSendMailTask : ASTask {
    NSData *_mimeMessage;
    NSString *_messageID;
}




-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)command;
-(id)contentType;
-(id)initWithMessage:(id)arg0 messageID:(id)arg1 ;
-(id)parameterData;
-(id)requestBody;
-(id)requestBodyStreamOutKnownSize:(*int)arg0 ;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;


@end


#endif
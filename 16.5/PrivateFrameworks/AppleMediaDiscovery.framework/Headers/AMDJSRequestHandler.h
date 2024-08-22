// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDJSREQUESTHANDLER_H
#define AMDJSREQUESTHANDLER_H


#import <Foundation/Foundation.h>


@interface AMDJSRequestHandler : NSObject



+(NSInteger)getActionCode:(id)arg0 ;
+(id)handlePayload:(id)arg0 error:(*id)arg1 ;
+(void)wrapUp;


@end


#endif
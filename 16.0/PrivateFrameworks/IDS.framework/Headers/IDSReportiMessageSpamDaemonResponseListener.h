// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSREPORTIMESSAGESPAMDAEMONRESPONSELISTENER_H
#define IDSREPORTIMESSAGESPAMDAEMONRESPONSELISTENER_H

@class NSString;
@protocol IDSDaemonListenerProtocol;

#import <Foundation/Foundation.h>

#import "IDSDaemonRequestTimer.h"

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject <IDSDaemonListenerProtocol>

 {
    IDSDaemonRequestTimer *_requestTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequestTimer:(id)arg0 ;
-(void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg0 status:(NSInteger)arg1 abusive:(BOOL)arg2 delay:(CGFloat)arg3 withError:(id)arg4 ;


@end


#endif
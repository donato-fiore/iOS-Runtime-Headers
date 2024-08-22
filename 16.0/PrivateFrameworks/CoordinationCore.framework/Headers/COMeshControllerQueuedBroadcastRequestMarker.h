// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESHCONTROLLERQUEUEDBROADCASTREQUESTMARKER_H
#define COMESHCONTROLLERQUEUEDBROADCASTREQUESTMARKER_H

@class NSString;
@protocol COMeshControllerQueuedElementProtocol;

#import <Foundation/Foundation.h>

#import "COMeshRequest.h"

@interface COMeshControllerQueuedBroadcastRequestMarker : NSObject <COMeshControllerQueuedElementProtocol>



@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeSelfInBroadcast; // ivar: _includeSelfInBroadcast
@property (readonly, copy, nonatomic) id *recipientCallback; // ivar: _recipientCallback
@property (readonly, copy, nonatomic) COMeshRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)command;
-(id)destination;
// -(id)initWithRequest:(id)arg0 includeSelf:(BOOL)arg1 recipientBlock:(id)arg2 completionHandler:(unk)arg3  ;
-(void)invokeCallbackWithError:(id)arg0 ;


@end


#endif
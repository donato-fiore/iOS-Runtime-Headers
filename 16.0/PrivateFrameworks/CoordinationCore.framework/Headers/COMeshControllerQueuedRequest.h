// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESHCONTROLLERQUEUEDREQUEST_H
#define COMESHCONTROLLERQUEUEDREQUEST_H

@class NSString;
@protocol COMeshControllerQueuedElementProtocol;

#import <Foundation/Foundation.h>

#import "COMeshNode.h"
#import "COMeshRequest.h"
#import "COMeshResponse.h"

@interface COMeshControllerQueuedRequest : NSObject <COMeshControllerQueuedElementProtocol>



@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) COMeshNode *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) COMeshRequest *request; // ivar: _request
@property (retain, nonatomic) COMeshResponse *response; // ivar: _response
@property (readonly) Class superclass;


-(id)command;
-(id)initWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)invokeCallbackWithError:(id)arg0 ;


@end


#endif
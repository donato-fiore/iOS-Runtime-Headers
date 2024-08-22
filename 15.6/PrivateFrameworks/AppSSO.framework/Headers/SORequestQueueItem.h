// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOREQUESTQUEUEITEM_H
#define SOREQUESTQUEUEITEM_H

@class NSString;
@protocol SOQueueItem, SOServiceProtocol;

#import <Foundation/Foundation.h>

#import "SOAuthorizationRequestParameters.h"

@interface SORequestQueueItem : NSObject <SOQueueItem>



@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isRunning; // ivar: _isRunning
@property (readonly, nonatomic) SOAuthorizationRequestParameters *requestParameters; // ivar: _requestParameters
@property (readonly, nonatomic) NSObject<SOServiceProtocol> *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 requestParameters:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif
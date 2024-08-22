// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMPENDINGLOCALPERSISTENCEWRAPPER_H
#define CAMPENDINGLOCALPERSISTENCEWRAPPER_H


#import <Foundation/Foundation.h>

#import "CAMCaptureRequest.h"

@interface CAMPendingLocalPersistenceWrapper : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) CAMCaptureRequest *request; // ivar: _request
@property (readonly, nonatomic) id *result; // ivar: _result


-(id)initWithRequest:(id)arg0 result:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif
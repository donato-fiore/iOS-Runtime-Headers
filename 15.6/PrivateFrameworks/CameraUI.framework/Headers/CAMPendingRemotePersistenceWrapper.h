// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPENDINGREMOTEPERSISTENCEWRAPPER_H
#define CAMPENDINGREMOTEPERSISTENCEWRAPPER_H

@class NSDate, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "CAMCaptureRequest.h"

@interface CAMPendingRemotePersistenceWrapper : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSMutableDictionary *job; // ivar: _job
@property (readonly, copy, nonatomic) NSString *loggingIdentifier; // ivar: _loggingIdentifier
@property (readonly, nonatomic) CAMCaptureRequest *request; // ivar: _request


-(id)initWithRequest:(id)arg0 creationDate:(id)arg1 job:(id)arg2 loggingIdentifier:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif
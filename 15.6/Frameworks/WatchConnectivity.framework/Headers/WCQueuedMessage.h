// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCQUEUEDMESSAGE_H
#define WCQUEUEDMESSAGE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "WCMessage.h"

@interface WCQueuedMessage : NSObject

@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly) NSDate *creationDate; // ivar: _creationDate
@property (retain) WCMessage *message; // ivar: _message
@property NSInteger retryCount; // ivar: _retryCount


-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
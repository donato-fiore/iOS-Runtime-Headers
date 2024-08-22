// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETWORKFLOWFETCHREQUEST_H
#define WFWIDGETWORKFLOWFETCHREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFWidgetWorkflowFetchRequest : NSObject

@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithFetchType:(NSUInteger)arg0 identifier:(id)arg1 limit:(NSUInteger)arg2 retryCount:(NSUInteger)arg3 completionHandler:(id)arg4 ;


@end


#endif
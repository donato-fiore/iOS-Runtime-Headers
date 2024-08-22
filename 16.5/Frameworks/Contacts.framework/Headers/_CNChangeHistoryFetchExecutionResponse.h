// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNCHANGEHISTORYFETCHEXECUTIONRESPONSE_H
#define _CNCHANGEHISTORYFETCHEXECUTIONRESPONSE_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>


@interface _CNChangeHistoryFetchExecutionResponse : NSObject

@property (readonly) NSInteger count; // ivar: _count
@property (readonly, copy) NSArray *events; // ivar: _events
@property (readonly, copy) NSData *token; // ivar: _token


-(id)initWithEvents:(id)arg0 count:(NSInteger)arg1 token:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPMODELSHIMREQUESTMIDDLEWAREOPERATION_H
#define _MPMODELSHIMREQUESTMIDDLEWAREOPERATION_H

@class NSString, NSError, NSArray;
@protocol MPMiddlewareOperation;


#import "MPAsyncOperation.h"
#import "_MPModelShimRequestMiddleware.h"
#import "MPModelRequest.h"

@interface _MPModelShimRequestMiddlewareOperation : MPAsyncOperation <MPMiddlewareOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) _MPModelShimRequestMiddleware *middleware; // ivar: _middleware
@property (retain, nonatomic) MPModelRequest *modelRequest; // ivar: _modelRequest
@property (readonly) Class superclass;


-(id)initWithMiddleware:(id)arg0 modelRequest:(id)arg1 ;
-(void)execute;


@end


#endif
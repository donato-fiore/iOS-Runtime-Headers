// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPMODELSHIMREQUESTMIDDLEWARE_H
#define _MPMODELSHIMREQUESTMIDDLEWARE_H

@class NSString, NSArray;
@protocol MPMiddleware;

#import <Foundation/Foundation.h>

#import "MPModelResponse.h"

@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPModelResponse *modelResponse; // ivar: _modelResponse
@property (readonly) Class superclass;


-(id)operationsForRequest:(id)arg0 ;


@end


#endif
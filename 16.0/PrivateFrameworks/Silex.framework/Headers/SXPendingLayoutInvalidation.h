// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXPENDINGLAYOUTINVALIDATION_H
#define SXPENDINGLAYOUTINVALIDATION_H

@class NFPendingPromise;
@protocol SXComponent;

#import <Foundation/Foundation.h>

#import "SXLayoutOptions.h"

@interface SXPendingLayoutInvalidation : NSObject

@property (readonly, nonatomic) NSObject<SXComponent> *component; // ivar: _component
@property (readonly, nonatomic) id *invalidation; // ivar: _invalidation
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) NFPendingPromise *pendingPromise; // ivar: _pendingPromise


-(id)initWithComponent:(id)arg0 pendingPromise:(id)arg1 layoutOptions:(id)arg2 invalidation:(id)arg3 ;


@end


#endif
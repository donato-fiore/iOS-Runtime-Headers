// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKROUTECONTEXTOBSERVERTHUNK_H
#define VKROUTECONTEXTOBSERVERTHUNK_H

@class NSString;
@protocol VKRouteContextObserver;

#import <Foundation/Foundation.h>


@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver>

 {
    *void _transitSupport;
    _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _routeContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRouteContext:(id)arg0 transitSupport:(*void)arg1 ;
-(void)dealloc;
-(void)routeContextStateDidChange:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LABELNAVROUTECONTEXTOBSERVERPROXY_H
#define LABELNAVROUTECONTEXTOBSERVERPROXY_H

@class NSString;
@protocol VKRouteContextObserver;

#import <Foundation/Foundation.h>


@interface LabelNavRouteContextObserverProxy : NSObject <VKRouteContextObserver>

 {
    *RouteContextChangeObserver _observer;
    vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> _observedContexts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRouteContextChangeObserver:(struct RouteContextChangeObserver *)arg0 ;
-(void)dealloc;
-(void)routeContextStateDidChange:(id)arg0 ;
-(void)startObserving:(id)arg0 ;
-(void)stopObserving:(id)arg0 ;


@end


#endif
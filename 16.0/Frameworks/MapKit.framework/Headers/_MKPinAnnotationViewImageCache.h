// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKPINANNOTATIONVIEWIMAGECACHE_H
#define _MKPINANNOTATIONVIEWIMAGECACHE_H


#import <Foundation/Foundation.h>


@interface _MKPinAnnotationViewImageCache : NSObject {
    _GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> _pool;
    _GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerStrongReferenceTag, 64UL, 2097152UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> _cache;
}




-(id)init;
-(id)pinsWithMapType:(NSUInteger)arg0 pinColor:(id)arg1 traits:(id)arg2 ;
-(void)flush;
-(void)setPins:(id)arg0 forMapType:(NSUInteger)arg1 pinColor:(id)arg2 traits:(id)arg3 ;


@end


#endif
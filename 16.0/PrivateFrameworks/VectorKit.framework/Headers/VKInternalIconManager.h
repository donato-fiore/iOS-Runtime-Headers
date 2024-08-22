// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKINTERNALICONMANAGER_H
#define VKINTERNALICONMANAGER_H


#import <Foundation/Foundation.h>


@interface VKInternalIconManager : NSObject {
    shared_ptr<grl::IconManager> _iconManager;
    ? _stylesheetVendor;
    read_write_lock _nameToStyleManagerLock;
    map<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::StdAllocator<std::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> _nameToStyleManager;
    _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;
    _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _resourceManager;
    shared_ptr<md::GeoResourceProvider> _resourceProvider;
    ? _fontManager;
    BOOL _isSharedIconManager;
}




+(NSInteger)convertGrlSizeGroup:(unsigned char)arg0 ;
+(unsigned char)convertSizeGroup:(NSInteger)arg0 ;
-(?)imageForStyleAttributes:(?)arg0 styleManager:(?)arg1 contentScale:(?)arg2 sizeGroupmodifiers;
-(?)initstylesheetVendor;
-(BOOL)isCachingAtlases;
-(id)imageForDataID:(unsigned int)arg0 text:(id)arg1 contentScale:(float)arg2 sizeGroup:(NSInteger)arg3 modifiers:(id)arg4 ;
-(id)imageForIconID:(unsigned int)arg0 contentScale:(float)arg1 sizeGroup:(NSInteger)arg2 modifiers:(id)arg3 ;
-(id)imageForImageSourceKey:(id)arg0 ;
-(id)imageForKey:(unsigned int)arg0 value:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(NSInteger)arg3 modifiers:(id)arg4 ;
-(id)imageForName:(id)arg0 contentScale:(float)arg1 sizeGroup:(NSInteger)arg2 modifiers:(id)arg3 ;
-(id)imageForStyleAttributes:(id)arg0 withStylesheetName:(id)arg1 contentScale:(float)arg2 sizeGroup:(NSInteger)arg3 modifiers:(id)arg4 ;
-(id)init;
-(unsigned int)darkVariant;
-(unsigned int)styleAttributeTransitSystemTypeKey;
-(unsigned int)styleAttributeTransitTypeKey;
-(unsigned int)trafficIncidentTypeKey;
-(void)_purgeStyleManagers;
-(void)_startTileGroupObserver;
-(void)dealloc;
-(void)purge;
-(void)purgeNonsharedResources;
-(void)setIsCachingAtlases:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGDATABASENAMECACHE_H
#define KGDATABASENAMECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface KGDatabaseNameCache : NSObject {
    os_unfair_lock_s _lock;
    BOOL _loaded;
    NSMutableDictionary *_labelIdByName;
    NSMutableDictionary *_labelNameById;
    NSMutableDictionary *_attrIdByPropertyName;
    NSMutableDictionary *_propertyNameByAttrId;
    NSUInteger _useCount;
}




-(BOOL)releaseCache;
-(id)attrIdentifierByPropertyName:(id)arg0 database:(id)arg1 ;
-(id)init;
-(id)labelIdentifierByName:(id)arg0 database:(id)arg1 ;
-(id)labelNameByIdentifier:(id)arg0 database:(id)arg1 ;
-(id)propertyNameByIdentifier:(id)arg0 database:(id)arg1 ;
-(void)_addLabelName:(id)arg0 identifier:(id)arg1 ;
-(void)_addPropertyName:(id)arg0 identifier:(id)arg1 ;
-(void)_loadCacheIfNeeded:(id)arg0 ;
-(void)addLabelName:(id)arg0 identifier:(id)arg1 database:(id)arg2 ;
-(void)addPropertyName:(id)arg0 identifier:(id)arg1 database:(id)arg2 ;
-(void)retainCache;
-(void)unloadCache;


@end


#endif
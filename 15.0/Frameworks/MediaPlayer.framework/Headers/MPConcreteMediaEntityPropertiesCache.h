// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCONCRETEMEDIAENTITYPROPERTIESCACHE_H
#define MPCONCRETEMEDIAENTITYPROPERTIESCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, MPMediaLibraryDataProvider;

#import <Foundation/Foundation.h>


@interface MPConcreteMediaEntityPropertiesCache : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_valuePersistenceBlocks;
    NSObject<OS_dispatch_queue> *_propertiesQueue;
}


@property (readonly, weak, nonatomic) NSObject<MPMediaLibraryDataProvider> *dataProvider; // ivar: _dataProvider
@property (readonly, nonatomic) Class dataProviderEntityClass; // ivar: _dataProviderEntityClass
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier


-(id)initWithLibraryDataProvider:(id)arg0 dataProviderEntityClass:(Class)arg1 identifier:(NSInteger)arg2 ;
-(id)valueForProperty:(id)arg0 isCached:(*BOOL)arg1 ;
-(void)_onBarrierCacheValues:(id)arg0 persistValueInBackgroundBlock:(id)arg1 ;
-(void)cachePropertyValues:(id)arg0 forProperties:(id)arg1 persistValueInBackgroundBlock:(id)arg2 ;
-(void)cacheValue:(id)arg0 forProperty:(id)arg1 persistValueInBackgroundBlock:(id)arg2 ;
-(void)dealloc;
-(void)delete;
-(void)invalidate;


@end


#endif
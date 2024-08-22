// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNSCENESOURCE_H
#define SCNSCENESOURCE_H

@class NSDictionary, NSData, NSString, NSURL;
@protocol NSKeyedUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface SCNSceneSource : NSObject <NSKeyedUnarchiverDelegate>

 {
    *__C3DSceneSource _sceneSource;
    *__C3DScene _lastLoadedScene;
    NSDictionary *_lastOptions;
    BOOL _sceneLoaded;
    NSDictionary *_sceneSourceOptions;
}


@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSURL *url;


+(BOOL)_shouldCacheWithOptions:(id)arg0 ;
+(id)_cachedSceneSourceForURL:(id)arg0 options:(id)arg1 ;
+(id)sceneFileTypes;
+(id)sceneSourceWithData:(id)arg0 options:(id)arg1 ;
+(id)sceneSourceWithURL:(id)arg0 options:(id)arg1 ;
+(id)sceneTypes;
+(void)_cacheSceneSource:(id)arg0 forURL:(id)arg1 options:(id)arg2 ;
+(void)_removeCachedSceneSourceIfNeededForURL:(id)arg0 ;
// -(BOOL)_appendToEntries:(id)arg0 entriesWithType:(NSUInteger)arg1 passingTest:(id)arg2 entryObjectConstructor:(unk)arg3  ;
-(BOOL)canExportToColladaWithNoDataLoss;
-(Class)unarchiver:(id)arg0 cannotDecodeObjectOfClassName:(id)arg1 originalClasses:(id)arg2 ;
-(NSInteger)countOfScenes;
-(NSInteger)sceneCount;
-(NSInteger)sourceStatus;
-(id)IDsOfEntriesWithClass:(Class)arg0 ;
-(id)_sceneWithClass:(Class)arg0 options:(id)arg1 statusHandler:(id)arg2 ;
-(id)c3dDataRepresentation;
-(id)copyPropertiesAtIndex:(NSInteger)arg0 options:(id)arg1 ;
-(id)debugQuickLookData;
-(id)debugQuickLookObject;
-(id)entriesPassingTest:(id)arg0 ;
-(id)entryWithID:(id)arg0 withClass:(Class)arg1 ;
-(id)entryWithIdentifier:(id)arg0 withClass:(Class)arg1 ;
-(id)identifiersOfEntriesWithClass:(Class)arg0 ;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)performConsistencyCheck;
-(id)propertyForKey:(id)arg0 ;
-(id)sceneAtIndex:(NSUInteger)arg0 options:(id)arg1 ;
-(id)sceneAtIndex:(NSUInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)sceneSourceOptions;
-(id)sceneWithClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)sceneWithClass:(Class)arg0 options:(id)arg1 statusHandler:(id)arg2 ;
-(id)sceneWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)sceneWithOptions:(id)arg0 statusHandler:(id)arg1 ;
-(struct __C3DLibrary *)library;
-(struct __C3DScene *)_createSceneRefWithOptions:(id)arg0 statusHandler:(id)arg1 ;
-(struct __C3DSceneSource *)sceneSourceRef;
-(void)dealloc;


@end


#endif
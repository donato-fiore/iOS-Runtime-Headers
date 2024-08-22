// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKCUSTOMFEATURESTORE_H
#define _MKCUSTOMFEATURESTORE_H

@class NSMutableSet, NSHashTable, NSString, GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource, MKCustomFeatureStoreDelegate;

#import <Foundation/Foundation.h>

#import "MKQuadTrie.h"

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource>

 {
    MKQuadTrie *_annotationsTrie;
    NSMutableSet *_globalAnnotations;
    NSHashTable *_observers;
    NSString *_annotationText;
    NSString *_annotationLocale;
    unsigned char _sceneState;
}


@property (copy, nonatomic) GEOFeatureStyleAttributes *clusterStyleAttributes; // ivar: _clusterStyleAttributes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKCustomFeatureStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isClusteringEnabled; // ivar: _isClusteringEnabled
@property (nonatomic) unsigned char sceneID; // ivar: _sceneID
@property (readonly) Class superclass;


-(NSUInteger)annotationCount;
-(id)allAnnotations;
-(id)annotationsInMapRect:(struct ? )arg0 ;
-(id)globalAnnotations;
-(id)init;
-(id)initWithClustering:(BOOL)arg0 ;
-(unsigned char)sceneState;
-(void)_clearGlobalAnnotations;
-(void)_clearTileAnnotations;
-(void)_invalidateGlobalAnnotations;
-(void)_invalidateRect:(struct ? )arg0 ;
-(void)_setSceneState:(unsigned char)arg0 ;
-(void)addAnnotations:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)getClusterAnnotationTextForClusterFeatureCount:(NSUInteger)arg0 text:(*id)arg1 locale:(*id)arg2 ;
-(void)getClusterImageTextForClusterFeatureCount:(NSUInteger)arg0 text:(*id)arg1 locale:(*id)arg2 ;
-(void)hideScene;
-(void)removeAnnotations:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setAnnotations:(id)arg0 ;
-(void)setClusterAnnotationText:(id)arg0 locale:(id)arg1 ;
-(void)showScene;


@end


#endif
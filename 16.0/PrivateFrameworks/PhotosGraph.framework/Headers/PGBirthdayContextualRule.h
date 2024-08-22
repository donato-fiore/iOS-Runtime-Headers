// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGBIRTHDAYCONTEXTUALRULE_H
#define PGBIRTHDAYCONTEXTUALRULE_H

@class NSArray, NSMutableDictionary, PHPhotoLibrary, NSString;
@protocol PGContextualRule, OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGCurationManager.h"

@interface PGBirthdayContextualRule : NSObject <PGContextualRule>

 {
    NSArray *_availablePersons;
    NSMutableDictionary *_personNodeByLocalIdentifier;
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
    PGCurationManager *_curationManager;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canProvideContextualKeyAssetsWithOptions:(id)arg0 ;
-(id)_bestAssetInCuratedAssets:(id)arg0 forPerson:(id)arg1 contextualScore:(*CGFloat)arg2 ;
-(id)_bestBirthdayCelebrationAssetForHighlightNode:(id)arg0 assetCollection:(id)arg1 curationContext:(id)arg2 ;
-(id)_fetchCuratedAssetsForHighlightItem:(id)arg0 intersectingAssets:(id)arg1 ;
-(id)_filterCuratedAssets:(id)arg0 forHighlightItem:(id)arg1 ;
-(id)initWithGraph:(id)arg0 photoLibrary:(id)arg1 curationManager:(id)arg2 loggingConnection:(id)arg3 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg0 sharingFilter:(unsigned short)arg1 withOptions:(id)arg2 modelReader:(id)arg3 curationContext:(id)arg4 usingBlock:(id)arg5 ;


@end


#endif
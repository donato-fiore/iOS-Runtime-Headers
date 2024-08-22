// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKKALEIDOSCOPECOORDINATORCACHE_H
#define NTKKALEIDOSCOPECOORDINATORCACHE_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol NTKFaceCollectionObserver;

#import <Foundation/Foundation.h>

#import "NTKFaceCollection.h"
#import "NTKTaskScheduler.h"

@interface NTKKaleidoscopeCoordinatorCache : NSObject <NTKFaceCollectionObserver>

 {
    NTKFaceCollection *_libraryCollection;
    NTKTaskScheduler *_taskScheduler;
    NSMutableArray *_pathsToTouch;
    NSMutableDictionary *_pathsToWrite;
    BOOL _isCleanupScheduled;
    NSUInteger _kaleidoscopeFaceCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedCache;
-(id)provideAtlasBacking:(id)arg0 uuid:(id)arg1 uuidLuma:(id)arg2 uuidChroma:(id)arg3 ;
-(void)_computeKaleidoscopeFaceCount;
-(void)faceCollection:(id)arg0 didAddFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollection:(id)arg0 didRemoveFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)faceCollectionDidReset:(id)arg0 ;
-(void)setLibraryCollection:(id)arg0 ;


@end


#endif
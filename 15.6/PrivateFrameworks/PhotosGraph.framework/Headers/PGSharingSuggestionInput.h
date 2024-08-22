// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGSUGGESTIONINPUT_H
#define PGSHARINGSUGGESTIONINPUT_H

@class NSArray, PHFetchResult, PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGSharingSuggestionInput : NSObject {
    NSArray *_assetLocalIdentifiers;
    NSArray *_momentLocalIdentifiers;
    NSArray *_momentNodes;
    PHFetchResult *_assets;
    PHFetchResult *_moments;
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, nonatomic) PHFetchResult *assets;
@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) NSArray *momentNodes;
@property (readonly, nonatomic) PHFetchResult *moments;


-(id)description;
-(id)initWithAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 graph:(id)arg2 photoLibrary:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg0 ;


@end


#endif
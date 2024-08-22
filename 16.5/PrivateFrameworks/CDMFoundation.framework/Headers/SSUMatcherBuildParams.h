// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUMATCHERBUILDPARAMS_H
#define SSUMATCHERBUILDPARAMS_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface SSUMatcherBuildParams : NSObject

@property (readonly) NSURL *cacheDirectoryURL; // ivar: _cacheDirectoryURL
@property (readonly) NSURL *datasetAssetsDirectoryURL; // ivar: _datasetAssetsDirectoryURL
@property (readonly) NSArray *initialApplicationInfos; // ivar: _initialApplicationInfos
@property (readonly) BOOL initializeModelsPreemptively; // ivar: _initializeModelsPreemptively
@property (readonly) NSURL *modelAssetsDirectoryURL; // ivar: _modelAssetsDirectoryURL


-(id)initWithModelAssetsDirectoryURL:(id)arg0 datasetAssetsDirectoryURL:(id)arg1 cacheDirectoryURL:(id)arg2 initialApplicationInfos:(id)arg3 initializeModelsPreemptively:(BOOL)arg4 ;


@end


#endif
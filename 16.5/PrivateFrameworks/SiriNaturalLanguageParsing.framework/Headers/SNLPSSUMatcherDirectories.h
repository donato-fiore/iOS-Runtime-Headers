// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLPSSUMATCHERDIRECTORIES_H
#define SNLPSSUMATCHERDIRECTORIES_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface SNLPSSUMatcherDirectories : NSObject

@property (readonly) NSURL *cacheDirectoryURL; // ivar: _cacheDirectoryURL
@property (readonly) NSURL *datasetAssetsDirectoryURL; // ivar: _datasetAssetsDirectoryURL
@property (readonly) NSURL *modelAssetsDirectoryURL; // ivar: _modelAssetsDirectoryURL


+(id)directoriesWithCacheDirectoryURL:(id)arg0 modelAssetsDirectoryURL:(id)arg1 datasetAssetsDirectoryURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithCacheDirectoryURL:(id)arg0 modelAssetsDirectoryURL:(id)arg1 datasetAssetsDirectoryURL:(id)arg2 ;


@end


#endif
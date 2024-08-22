// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEDERIVATIVESCACHE_H
#define CPLENGINEDERIVATIVESCACHE_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPLEngineDerivativesCache : NSObject {
    NSURL *_cacheMappingURL;
    BOOL _tryCreatingCacheFolder;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy, nonatomic) NSURL *cacheURL; // ivar: _cacheURL
@property (retain, nonatomic) Class derivativeGeneratorClass; // ivar: _derivativeGeneratorClass


-(BOOL)_checkGeneratedResources:(id)arg0 error:(*id)arg1 ;
-(BOOL)_checkResource:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isUnsupportedFormatError:(id)arg0 ;
-(id)_cacheKeyForReferenceResource:(id)arg0 adjustments:(id)arg1 includePosterFrame:(BOOL)arg2 ;
-(id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg0 adjustment:(id)arg1 includePosterFrame:(BOOL)arg2 ;
-(id)_folderNameForReferenceResource:(id)arg0 adjustment:(id)arg1 includePosterFrame:(BOOL)arg2 ;
-(id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg0 adjustment:(id)arg1 includePosterFrame:(BOOL)arg2 ;
-(id)cachedResourcesForReferenceResource:(id)arg0 adjustment:(id)arg1 includePosterFrame:(BOOL)arg2 ;
-(id)initWithCacheURL:(id)arg0 ;
-(id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg0 adjustment:(id)arg1 includePosterFrame:(BOOL)arg2 ;
-(void)_createCacheFolderIfNecessary;
-(void)_updateChange:(*id)arg0 fromOldChange:(id)arg1 withResources:(id)arg2 excludeImages:(BOOL)arg3 ;
-(void)discardCache;
-(void)generateDerivativesForChange:(id)arg0 derivativesFilter:(id)arg1 completionHandler:(id)arg2 ;
-(void)noteGeneratedResouces:(id)arg0 haveBeenGeneratedForReferenceResource:(id)arg1 adjustment:(id)arg2 includePosterFrame:(BOOL)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONMODELPROVIDERIMPLEMENTATION_H
#define MPCVOCALATTENUATIONMODELPROVIDERIMPLEMENTATION_H

@class NSString, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCVocalAttenuationModel.h"

@interface MPCVocalAttenuationModelProviderImplementation : NSObject {
    NSObject<OS_dispatch_queue> *_creationQueue;
}


@property (readonly, copy, nonatomic) NSString *basePath;
@property (copy, nonatomic) NSError *loadingError; // ivar: _loadingError
@property (retain, nonatomic) MPCVocalAttenuationModel *model; // ivar: _model
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *plistPath;
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)isValidEspressoFile:(id)arg0 ;
-(BOOL)isValidModelFile:(id)arg0 ;
-(BOOL)isValidPlistModelFile:(id)arg0 ;
-(BOOL)moveModelFromURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)validateModelAtURL:(id)arg0 ;
-(id)_setupPaths;
-(id)baseDirectoryURL;
-(id)baseModelDirectoryURL;
-(id)bundleModelDirectoryURL;
-(id)directoriesAtURL:(id)arg0 ;
-(id)init;
-(id)latestModelDirectoryAtURL:(id)arg0 ;
-(id)remoteModelDirectoryURL;
-(void)prepareWithCompletion:(id)arg0 ;
-(void)purgeModelAtURL:(id)arg0 ;
-(void)purgeSideLoadedModelDirectoriesAtURL:(id)arg0 ;


@end


#endif
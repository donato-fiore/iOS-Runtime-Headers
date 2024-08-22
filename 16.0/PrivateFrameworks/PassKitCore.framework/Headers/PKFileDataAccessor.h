// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFILEDATAACCESSOR_H
#define PKFILEDATAACCESSOR_H

@class NSArray, NSString, NSURL;


#import "PKDataAccessor.h"
#import "PKDirectoryCoordinator.h"
#import "PKRemoteAssetManager.h"

@interface PKFileDataAccessor : PKDataAccessor {
    PKDirectoryCoordinator *_coordinator;
    BOOL _remoteAssetManagerAccessed;
    PKRemoteAssetManager *_remoteAssetManager;
    NSArray *_seids;
}


@property (copy, nonatomic) NSString *explicitDataTypeIdentifier; // ivar: _explicitDataTypeIdentifier
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL ownsFileURL; // ivar: _ownsFileURL


-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg0 ;
-(BOOL)remoteAssetsDownloadedForScreenScale:(CGFloat)arg0 seids:(id)arg1 suffix:(id)arg2 ;
-(id)archiveData;
-(id)bundle;
-(id)content;
-(id)dataForBundleResource:(id)arg0 ;
-(id)dataForBundleResourceNamed:(id)arg0 withExtension:(id)arg1 ;
-(id)dataForBundleResources:(id)arg0 ;
-(id)dictionary;
-(id)displayProfileOfType:(NSInteger)arg0 ;
-(id)imageSetForType:(NSInteger)arg0 screenScale:(CGFloat)arg1 suffix:(id)arg2 displayProfile:(id)arg3 preheat:(BOOL)arg4 ;
-(id)init;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 coordinator:(id)arg2 ;
-(id)manifestHash;
-(id)passLocalizedStringForKey:(id)arg0 ;
-(id)remoteAssetManager;
-(id)remoteAssetManagerForSEIDs:(id)arg0 ;
-(id)resourceValueForKey:(id)arg0 ;
-(id)serializedFileWrapper;
-(void)_downloadRemoteAssetsWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)contentWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)dictionaryWithCompletion:(id)arg0 ;
-(void)imageSetForType:(NSInteger)arg0 screenScale:(CGFloat)arg1 suffix:(id)arg2 displayProfile:(id)arg3 preheat:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)revocationStatusWithCompletion:(id)arg0 ;


@end


#endif
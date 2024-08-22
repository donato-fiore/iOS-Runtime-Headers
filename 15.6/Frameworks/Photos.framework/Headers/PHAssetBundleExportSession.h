// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETBUNDLEEXPORTSESSION_H
#define PHASSETBUNDLEEXPORTSESSION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface PHAssetBundleExportSession : NSObject

@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (copy, nonatomic) NSString *customFilenameBase; // ivar: _customFilenameBase
@property (readonly, nonatomic) NSDictionary *fileURLs; // ivar: _fileURLs
@property (readonly, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID


-(id)_createAssetBundleFromAsset:(id)arg0 withFileURLs:(id)arg1 atURL:(id)arg2 withError:(*id)arg3 ;
-(id)_filenameBaseForAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 withAssetExportRequestFileURLs:(id)arg1 ;
-(void)writeToDirectoryURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
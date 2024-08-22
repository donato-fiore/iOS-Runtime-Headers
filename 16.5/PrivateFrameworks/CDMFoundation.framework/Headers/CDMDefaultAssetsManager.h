// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMDEFAULTASSETSMANAGER_H
#define CDMDEFAULTASSETSMANAGER_H

@class NSFileManager, NSString, NSLocale;

#import <Foundation/Foundation.h>


@interface CDMDefaultAssetsManager : NSObject {
    NSFileManager *_fileManager;
}


@property (readonly, nonatomic) NSString *assetDirPath; // ivar: _assetDirPath
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(id)getAbsolutePathForAssetsRootFolder;
-(id)getAbsolutePathForLocalizedAssetsRootFolder;
-(id)getAbsolutePathForServiceAssetFolders:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 assetDirPath:(id)arg1 ;


@end


#endif
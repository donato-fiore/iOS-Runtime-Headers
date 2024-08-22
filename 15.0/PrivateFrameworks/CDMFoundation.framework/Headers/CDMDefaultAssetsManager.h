// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMDEFAULTASSETSMANAGER_H
#define CDMDEFAULTASSETSMANAGER_H

@class NSFileManager, NSLocale;

#import <Foundation/Foundation.h>


@interface CDMDefaultAssetsManager : NSObject {
    NSFileManager *_fileManager;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(id)getAbsolutePathForAssetsRootFolder;
-(id)getAbsolutePathForCustomizedAssetsRootFolder:(id)arg0 ;
-(id)getAbsolutePathForCustomizedLocalizedAssetsRootFolder:(id)arg0 ;
-(id)getAbsolutePathForLocalizedAssetsRootFolder;
-(id)getAbsolutePathForServiceAssetFolder:(id)arg0 ;
-(id)getAbsolutePathForServiceAssetFolder:(id)arg0 customizedRoot:(id)arg1 ;
-(id)initWithLocale:(id)arg0 ;


@end


#endif
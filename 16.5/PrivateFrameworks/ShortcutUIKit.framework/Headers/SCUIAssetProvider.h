// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCUIASSETPROVIDER_H
#define SCUIASSETPROVIDER_H

@class NSURL, _UIAssetManager;

#import <Foundation/Foundation.h>


@interface SCUIAssetProvider : NSObject {
    NSURL *_bundleURL;
    _UIAssetManager *_assetManager;
}




-(id)_assetManager;
-(id)imageNamed:(id)arg0 ;
-(id)initWithBundleURL:(id)arg0 ;


@end


#endif
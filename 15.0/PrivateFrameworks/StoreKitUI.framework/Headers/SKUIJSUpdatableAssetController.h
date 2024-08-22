// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIJSUPDATABLEASSETCONTROLLER_H
#define SKUIJSUPDATABLEASSETCONTROLLER_H

@class IKJSObject;
@protocol SKUIJSUpdatableAssetController;


#import "SKUIClientContext.h"

@interface SKUIJSUpdatableAssetController : IKJSObject <SKUIJSUpdatableAssetController>

 {
    SKUIClientContext *_clientContext;
}




-(id)currentManifestVersion;
-(id)initWithAppContext:(id)arg0 clientContext:(id)arg1 ;
-(id)loadResource:(id)arg0 ;
-(id)newestCachedManifestVersion;
-(void)refreshCachedManifest:(id)arg0 ;


@end


#endif
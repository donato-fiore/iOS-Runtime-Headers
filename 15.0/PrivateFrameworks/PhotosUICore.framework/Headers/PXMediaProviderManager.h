// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEDIAPROVIDERMANAGER_H
#define PXMEDIAPROVIDERMANAGER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface PXMediaProviderManager : NSObject {
    NSMapTable *_imageProviderByClass;
}




+(id)defaultManager;
-(id)imageProviderForAsset:(id)arg0 ;
-(id)init;


@end


#endif
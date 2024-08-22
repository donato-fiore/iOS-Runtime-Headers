// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDRAGGINGITEMLOCALOBJECT_H
#define PXDRAGGINGITEMLOCALOBJECT_H


#import <Foundation/Foundation.h>

#import "PXAssetReference.h"

@interface PXDraggingItemLocalObject : NSObject

@property (readonly, nonatomic) PXAssetReference *assetReference; // ivar: _assetReference
@property (readonly, nonatomic) BOOL needsImport;


-(id)init;
-(id)initWithAssetReference:(id)arg0 ;


@end


#endif
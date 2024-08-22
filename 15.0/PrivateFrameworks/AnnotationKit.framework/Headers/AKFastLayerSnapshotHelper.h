// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKFASTLAYERSNAPSHOTHELPER_H
#define AKFASTLAYERSNAPSHOTHELPER_H


#import <Foundation/Foundation.h>


@interface AKFastLayerSnapshotHelper : NSObject



+(struct CGImage *)newFastSnapshotFromLayer:(id)arg0 withSourceRect:(struct CGRect )arg1 acutalSnapshotRect:(struct CGRect *)arg2 ;


@end


#endif
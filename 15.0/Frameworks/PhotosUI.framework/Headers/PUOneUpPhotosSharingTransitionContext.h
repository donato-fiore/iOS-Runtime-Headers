// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUONEUPPHOTOSSHARINGTRANSITIONCONTEXT_H
#define PUONEUPPHOTOSSHARINGTRANSITIONCONTEXT_H



#import "PUPhotosSharingTransitionContext.h"
#import "PUAssetReference.h"

@interface PUOneUpPhotosSharingTransitionContext : PUPhotosSharingTransitionContext

@property (retain, nonatomic) PUAssetReference *currentAssetReference; // ivar: _currentAssetReference


-(id)keyAssetIndexPath;


@end


#endif
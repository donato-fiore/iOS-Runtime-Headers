// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETEDITOPERATIONPERFORMER_H
#define PXASSETEDITOPERATIONPERFORMER_H

@class NSString, NSProgress;
@protocol PXDisplayAsset;


#import "PXAction.h"

@interface PXAssetEditOperationPerformer : PXAction

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, copy, nonatomic) NSString *editOperationType; // ivar: _editOperationType
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress


-(id)init;
-(id)initWithEditOperationType:(id)arg0 asset:(id)arg1 ;


@end


#endif
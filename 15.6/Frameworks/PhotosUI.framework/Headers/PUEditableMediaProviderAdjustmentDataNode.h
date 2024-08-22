// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUEDITABLEMEDIAPROVIDERADJUSTMENTDATANODE_H
#define PUEDITABLEMEDIAPROVIDERADJUSTMENTDATANODE_H

@class PXRunNode, PHAdjustmentData;
@protocol PUEditableAsset;


#import "PUEditableMediaProvider.h"

@interface PUEditableMediaProviderAdjustmentDataNode : PXRunNode {
    int _requestID;
}


@property (readonly, nonatomic) PHAdjustmentData *adjustmentData; // ivar: _adjustmentData
@property (readonly, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // ivar: _mediaProvider


-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(void)_handleDidLoadAdjustmentData:(id)arg0 error:(id)arg1 ;
-(void)didCancel;
-(void)run;


@end


#endif
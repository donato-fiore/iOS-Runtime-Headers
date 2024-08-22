// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTASSETDATAREQUEST_H
#define PHIMPORTASSETDATAREQUEST_H

@class PFCanceler;

#import <Foundation/Foundation.h>

#import "PHImportAsset.h"

@interface PHImportAssetDataRequest : NSObject {
    PFCanceler *_canceler;
}


@property (retain, nonatomic) PHImportAsset *asset; // ivar: _asset
@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (readonly, nonatomic) PHImportAsset *requestAsset;


-(BOOL)isCanceled;
-(id)initWithAsset:(id)arg0 ;
-(void)cancel;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSASSETDOWNLOADANALYTIC_H
#define DDSASSETDOWNLOADANALYTIC_H



#import "DDSTimedAnalytic.h"
#import "DDSAsset.h"

@interface DDSAssetDownloadAnalytic : DDSTimedAnalytic

@property (retain, nonatomic) DDSAsset *asset; // ivar: _asset


-(id)init;
-(id)initWithAsset:(id)arg0 ;


@end


#endif
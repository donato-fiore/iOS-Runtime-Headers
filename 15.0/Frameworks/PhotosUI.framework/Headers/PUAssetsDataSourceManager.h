// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUASSETSDATASOURCEMANAGER_H
#define PUASSETSDATASOURCEMANAGER_H

@protocol PUAssetsDataSourceManagerDelegate;

#import <Foundation/Foundation.h>

#import "PUAssetsDataSource.h"

@interface PUAssetsDataSourceManager : NSObject

@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (weak, nonatomic) NSObject<PUAssetsDataSourceManagerDelegate> *delegate; // ivar: _delegate




@end


#endif
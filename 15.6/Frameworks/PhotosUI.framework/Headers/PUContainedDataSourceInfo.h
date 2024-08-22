// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCONTAINEDDATASOURCEINFO_H
#define PUCONTAINEDDATASOURCEINFO_H


#import <Foundation/Foundation.h>

#import "PUAssetsDataSource.h"

@interface PUContainedDataSourceInfo : NSObject

@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (nonatomic) _NSRange externalSections; // ivar: _externalSections


-(id)description;


@end


#endif
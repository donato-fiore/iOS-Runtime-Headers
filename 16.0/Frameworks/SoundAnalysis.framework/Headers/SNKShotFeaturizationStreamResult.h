// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNKSHOTFEATURIZATIONSTREAMRESULT_H
#define SNKSHOTFEATURIZATIONSTREAMRESULT_H

@class MLMultiArray;

#import <Foundation/Foundation.h>

#import "SNKShotLabel.h"

@interface SNKShotFeaturizationStreamResult : NSObject

@property (retain) MLMultiArray *data; // ivar: _data
@property NSInteger datasetType; // ivar: _datasetType
@property (retain) SNKShotLabel *label; // ivar: _label




@end


#endif
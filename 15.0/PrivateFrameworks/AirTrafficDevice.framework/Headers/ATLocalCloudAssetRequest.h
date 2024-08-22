// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATLOCALCLOUDASSETREQUEST_H
#define ATLOCALCLOUDASSETREQUEST_H

@class ATAsset, NSFileHandle;

#import <Foundation/Foundation.h>


@interface ATLocalCloudAssetRequest : NSObject

@property (retain, nonatomic) ATAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (nonatomic) CGFloat startTime; // ivar: _startTime




@end


#endif
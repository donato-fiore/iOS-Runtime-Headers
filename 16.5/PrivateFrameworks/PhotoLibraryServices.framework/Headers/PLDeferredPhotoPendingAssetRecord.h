// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDEFERREDPHOTOPENDINGASSETRECORD_H
#define PLDEFERREDPHOTOPENDINGASSETRECORD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"
#import "PLPhotoLibrary.h"

@interface PLDeferredPhotoPendingAssetRecord : NSObject

@property (retain) PLManagedAsset *asset; // ivar: _asset
@property BOOL isBackgroundPriority; // ivar: _isBackgroundPriority
@property (retain) PLPhotoLibrary *library; // ivar: _library
@property (retain) NSString *requestReason; // ivar: _requestReason
@property NSUInteger signpostId; // ivar: _signpostId




@end


#endif
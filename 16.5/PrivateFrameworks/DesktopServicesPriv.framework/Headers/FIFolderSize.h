// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIFOLDERSIZE_H
#define FIFOLDERSIZE_H

@class NSError;

#import <Foundation/Foundation.h>


@interface FIFolderSize : NSObject

@property (readonly, nonatomic) NSInteger compressionAdjustedLogicalBytes; // ivar: _compressionAdjustedLogicalBytes
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger folderCount; // ivar: _folderCount
@property (readonly, nonatomic) NSInteger logicalBytes; // ivar: _logicalBytes
@property (readonly, nonatomic) NSInteger physicalBytes; // ivar: _physicalBytes
@property (readonly, nonatomic) NSInteger skippedItemCount; // ivar: _skippedItemCount
@property (readonly, nonatomic) NSInteger totalItems; // ivar: _totalItems
@property (readonly, nonatomic) NSInteger userVisibleItems; // ivar: _userVisibleItems




@end


#endif
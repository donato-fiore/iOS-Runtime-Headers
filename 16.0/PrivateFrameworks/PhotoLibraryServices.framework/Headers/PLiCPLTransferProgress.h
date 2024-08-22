// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLICPLTRANSFERPROGRESS_H
#define PLICPLTRANSFERPROGRESS_H


#import <Foundation/Foundation.h>


@interface PLiCPLTransferProgress : NSObject

@property (nonatomic) NSUInteger notUploadedItemsCount; // ivar: _notUploadedItemsCount
@property (nonatomic) NSUInteger notUploadedPhotosCount; // ivar: _notUploadedPhotosCount
@property (nonatomic) NSUInteger notUploadedVideosCount; // ivar: _notUploadedVideosCount


-(id)description;


@end


#endif
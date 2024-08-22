// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILEMANAGERALLOCATEDSIZEREMOVEDELEGATE_H
#define PLFILEMANAGERALLOCATEDSIZEREMOVEDELEGATE_H

@class NSString;
@protocol NSFileManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLFileManagerAllocatedSizeRemoveDelegate : NSObject <NSFileManagerDelegate>



@property (readonly) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSInteger totalFileAllocatedSize; // ivar: _totalFileAllocatedSize


-(BOOL)fileManager:(id)arg0 shouldRemoveItemAtURL:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCAMERADEVICEREMOVEDITEMSCOALESCER_H
#define ICCAMERADEVICEREMOVEDITEMSCOALESCER_H

@class NSDate, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHImportDeviceSource.h"

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastNotify;
    PHImportDeviceSource *_source;
    NSMutableArray *_items;
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
}




-(id)initWithSource:(id)arg0 block:(id)arg1 ;
-(void)coalesceItems:(id)arg0 ;


@end


#endif
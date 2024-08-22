// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBREADINGLIST_H
#define WBREADINGLIST_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBReadingListPrivate.h"

@interface WBReadingList : NSObject {
    WBReadingListPrivate *_private;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(BOOL)supportsURL:(id)arg0 ;
+(id)defaultReadingList;
-(BOOL)addReadingListItemWithURL:(id)arg0 title:(id)arg1 previewText:(id)arg2 error:(*id)arg3 ;
-(id)_init;
-(id)init;


@end


#endif
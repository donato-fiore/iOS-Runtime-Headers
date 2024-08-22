// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSXPCROW_H
#define NSXPCROW_H



#import "NSPersistentCacheRow.h"

@interface NSXPCRow : NSPersistentCacheRow {
    id *_node;
}




-(id)initWithNode:(id)arg0 ;
-(id)objectID;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYMEMORYFEEDDATASOURCE_H
#define _PXSTORYMEMORYFEEDDATASOURCE_H


#import <Foundation/Foundation.h>

#import "PXSectionedDataSource.h"

@interface _PXStoryMemoryFeedDataSource : NSObject {
    PXSectionedDataSource *_dataSource;
}




-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)objectIDAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectReferenceNearestToObjectReference:(id)arg0 ;


@end


#endif
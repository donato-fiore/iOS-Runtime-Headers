// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYMEMORYFORYOUDATASOURCE_H
#define _PXSTORYMEMORYFORYOUDATASOURCE_H


#import <Foundation/Foundation.h>

#import "PXStateBasedMemoriesDataSource.h"

@interface _PXStoryMemoryForYouDataSource : NSObject {
    PXStateBasedMemoriesDataSource *_dataSource;
}




-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithDataSource:(id)arg0 ;


@end


#endif
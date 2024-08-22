// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFURLLOCALSTREAMTASKFROMDATATASKDATABLOBBY_H
#define __NSCFURLLOCALSTREAMTASKFROMDATATASKDATABLOBBY_H

@protocol NSCopying, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_data> *_remainingData;
    id *_completion;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif
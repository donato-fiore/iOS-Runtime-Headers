// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSTATICSYNCTASK_H
#define HDSTATICSYNCTASK_H

@class NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDStaticSyncTask : NSObject {
    HDProfile *_profile;
    NSUInteger _options;
    NSUUID *_storeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithProfile:(id)arg0 options:(NSUInteger)arg1 storeIdentifier:(id)arg2 ;
-(id)runWithCompletion:(id)arg0 ;


@end


#endif
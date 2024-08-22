// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMEDIAAPPLICATIONS_H
#define ATXMEDIAAPPLICATIONS_H

@class NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXMediaApplications : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_mediaApps;
}




-(BOOL)appSupportsMedia:(id)arg0 ;
-(id)init;
-(void)_updateMediaApps;


@end


#endif
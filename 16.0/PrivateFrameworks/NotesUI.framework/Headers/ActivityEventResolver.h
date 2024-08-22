// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTIVITYEVENTRESOLVER_H
#define ACTIVITYEVENTRESOLVER_H


#import <Foundation/Foundation.h>


@interface ActivityEventResolver : NSObject {
    ? objectCache;
    ? participantCache;
    ? participantAvatarCache;
    ? mentionsCache;
    ? itemCache;
    ? objectDidUpdateShareObservation;
    ? object;
    ? context;
}




-(id)init;
-(id)initWithObject:(id)arg0 error:(*id)arg1 ;


@end


#endif
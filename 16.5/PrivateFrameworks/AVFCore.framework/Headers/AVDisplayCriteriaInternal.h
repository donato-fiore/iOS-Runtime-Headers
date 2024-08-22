// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVDISPLAYCRITERIAINTERNAL_H
#define AVDISPLAYCRITERIAINTERNAL_H


#import <Foundation/Foundation.h>


@interface AVDisplayCriteriaInternal : NSObject {
    int videoDynamicRange;
    float refreshRate;
}




-(id)initWithRefreshRate:(float)arg0 videoDynamicRange:(int)arg1 ;


@end


#endif
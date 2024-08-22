// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTOPICDISSECTORGUARDEDDATA_H
#define PPTOPICDISSECTORGUARDEDDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PPTopicDissectorGuardedData : NSObject {
    BOOL stop;
    NSMutableArray *topics;
    NSMutableArray *namedEntities;
    NSMutableArray *topicsExactMatchesInSourceText;
}






@end


#endif
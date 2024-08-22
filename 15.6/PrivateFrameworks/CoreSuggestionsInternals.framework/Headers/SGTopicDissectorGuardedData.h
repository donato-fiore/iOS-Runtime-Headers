// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGTOPICDISSECTORGUARDEDDATA_H
#define SGTOPICDISSECTORGUARDEDDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SGTopicDissectorGuardedData : NSObject {
    BOOL stop;
    NSMutableArray *topics;
    NSMutableArray *namedEntities;
    NSMutableArray *topicsExactMatchesInSourceText;
}






@end


#endif
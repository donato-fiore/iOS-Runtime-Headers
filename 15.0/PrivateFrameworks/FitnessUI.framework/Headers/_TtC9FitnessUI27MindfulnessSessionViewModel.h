// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9FITNESSUI27MINDFULNESSSESSIONVIEWMODEL_H
#define _TTC9FITNESSUI27MINDFULNESSSESSIONVIEWMODEL_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _TtC9FitnessUI27MindfulnessSessionViewModel : NSObject {
    ? uuid;
    ? startDate;
    ? endDate;
    ? duration;
    ? metadata;
    ? sourceRevision;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *metadata;


-(id)init;


@end


#endif
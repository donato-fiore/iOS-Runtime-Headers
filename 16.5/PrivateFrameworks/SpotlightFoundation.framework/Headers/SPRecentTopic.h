// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRECENTTOPIC_H
#define SPRECENTTOPIC_H

@class SFTopic, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface SPRecentTopic : NSObject {
    SFTopic *_topic;
    NSNumber *_score;
    NSDate *_engagementDate;
}


@property (readonly, nonatomic) NSDate *engagementDate;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) SFTopic *topic;


-(id)initWithTopic:(id)arg0 score:(id)arg1 engagementDate:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCHANNELSECTIONHEADLINESFETCHRESULT_H
#define FCCHANNELSECTIONHEADLINESFETCHRESULT_H

@class NSArray;
@protocol FCChannelProviding;

#import <Foundation/Foundation.h>


@interface FCChannelSectionHeadlinesFetchResult : NSObject

@property (retain, nonatomic) NSObject<FCChannelProviding> *channel; // ivar: _channel
@property (retain, nonatomic) NSArray *sectionHeadlinesGroups; // ivar: _sectionHeadlinesGroups


-(id)init;
-(id)initWithChannel:(id)arg0 sectionHeadlinesGroups:(id)arg1 ;


@end


#endif
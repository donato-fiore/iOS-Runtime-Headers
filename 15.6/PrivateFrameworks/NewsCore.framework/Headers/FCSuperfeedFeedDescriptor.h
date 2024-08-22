// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSUPERFEEDFEEDDESCRIPTOR_H
#define FCSUPERFEEDFEEDDESCRIPTOR_H



#import "FCFeedDescriptor.h"

@interface FCSuperfeedFeedDescriptor : FCFeedDescriptor

@property (readonly, nonatomic) FCFeedDescriptor *defaultSectionFeed; // ivar: _defaultSectionFeed


-(NSInteger)feedFilterOptions;
-(NSInteger)feedPersonalizationConfigurationSet;
-(NSInteger)feedSortMethod;
-(NSInteger)feedType;
-(id)backingChannel;
-(id)backingTag;
-(id)initWithDefaultSection:(id)arg0 ;
-(id)name;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOSETTINGSPUBLISHERBASE_H
#define MOSETTINGSPUBLISHERBASE_H

@class NSSet;


#import "MOPublisher.h"

@interface MOSettingsPublisherBase : MOPublisher

@property (readonly, nonatomic) NSSet *interestedGroups; // ivar: _interestedGroups
@property (readonly, nonatomic) id *startBlock; // ivar: _startBlock
@property (readonly, nonatomic) id *stopBlock; // ivar: _stopBlock
@property (readonly, nonatomic) MOPublisher *upstream; // ivar: _upstream


// -(id)initWithUpstream:(id)arg0 interestedGroups:(id)arg1 startBlock:(id)arg2 stopBlock:(unk)arg3  ;
-(void)subscribe:(id)arg0 ;


@end


#endif
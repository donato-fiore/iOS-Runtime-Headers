// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOEFFECTIVEPUBLISHER_H
#define MOEFFECTIVEPUBLISHER_H



#import "MOPublisher.h"
#import "MOSettingsPublisherBase.h"

@interface MOEffectivePublisher : MOPublisher

@property (readonly, nonatomic) MOSettingsPublisherBase *base; // ivar: _base


-(id)initWithInterestedGroups:(id)arg0 ;
-(id)sinkWithRecieveInput:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif
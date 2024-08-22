// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFFLUIDCOLLECTIONVIEWREUSEREGISTRATION_H
#define SFFLUIDCOLLECTIONVIEWREUSEREGISTRATION_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface SFFluidCollectionViewReuseRegistration : NSObject

@property (readonly, nonatomic) NSMutableSet *queue; // ivar: _queue
@property (readonly, copy, nonatomic) id *viewCreationBlock; // ivar: _viewCreationBlock


-(id)initWithViewCreationBlock:(id)arg0 ;


@end


#endif
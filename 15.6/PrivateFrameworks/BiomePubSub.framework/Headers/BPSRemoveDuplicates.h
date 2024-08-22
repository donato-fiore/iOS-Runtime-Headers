// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSREMOVEDUPLICATES_H
#define BPSREMOVEDUPLICATES_H

@protocol BPSPublisher;


#import "BPSPublisher.h"

@interface BPSRemoveDuplicates : BPSPublisher

@property (readonly, copy, nonatomic) id *isDuplicate; // ivar: _isDuplicate
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


-(id)init;
-(id)initWithUpstream:(id)arg0 isDuplicate:(id)arg1 ;
-(void)subscribe:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSZIPMANY_H
#define BPSZIPMANY_H

@class NSArray;


#import "BPSPublisher.h"

@interface BPSZipMany : BPSPublisher

@property (readonly, nonatomic) NSArray *publishers; // ivar: _publishers


-(id)init;
-(id)initWithPublishers:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif
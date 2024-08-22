// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSZIP_H
#define BPSZIP_H

@protocol BPSPublisher;


#import "BPSPublisher.h"

@interface BPSZip : BPSPublisher

@property (readonly, nonatomic) NSObject<BPSPublisher> *a; // ivar: _a
@property (readonly, nonatomic) NSObject<BPSPublisher> *b; // ivar: _b


-(id)init;
-(id)initWithA:(id)arg0 b:(id)arg1 ;
-(void)subscribe:(id)arg0 ;


@end


#endif
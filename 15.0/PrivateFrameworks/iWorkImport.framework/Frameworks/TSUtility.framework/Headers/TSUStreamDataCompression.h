// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUSTREAMDATACOMPRESSION_H
#define TSUSTREAMDATACOMPRESSION_H

@protocol OS_dispatch_data;


#import "TSUStreamCompression.h"

@interface TSUStreamDataCompression : TSUStreamCompression {
    NSObject<OS_dispatch_data> *_outputData;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_data> *outputData;


-(BOOL)handleData:(id)arg0 isDone:(BOOL)arg1 ;
-(id)initWithAlgorithm:(int)arg0 operation:(int)arg1 ;
-(void)setHandler:(id)arg0 ;


@end


#endif
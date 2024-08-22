// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLSHUFFLINGBATCHPROVIDER_H
#define MLSHUFFLINGBATCHPROVIDER_H

@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface MLShufflingBatchProvider : NSObject <MLBatchProvider>

 {
    vector<long, std::allocator<long>> indices;
    linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> randomNumberGenerator;
}


@property (retain) NSObject<MLBatchProvider> *batchProvider; // ivar: _batchProvider
@property (readonly, nonatomic) NSInteger count;


-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)initWithBatchProvider:(id)arg0 seed:(id)arg1 ;
-(void)shuffle;


@end


#endif
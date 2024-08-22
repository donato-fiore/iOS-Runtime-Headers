// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLWINDOWEDBATCHPROVIDER_H
#define MLWINDOWEDBATCHPROVIDER_H

@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface MLWindowedBatchProvider : NSObject <MLBatchProvider>



@property (readonly, nonatomic) NSInteger count;
@property (retain, nonatomic) NSObject<MLBatchProvider> *fullBatch; // ivar: _fullBatch
@property (nonatomic) NSInteger startIndex; // ivar: _startIndex
@property (nonatomic) NSInteger windowLength; // ivar: _windowLength


-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)initWithBatch:(id)arg0 startIndex:(NSInteger)arg1 windowLength:(NSInteger)arg2 error:(*id)arg3 ;


@end


#endif
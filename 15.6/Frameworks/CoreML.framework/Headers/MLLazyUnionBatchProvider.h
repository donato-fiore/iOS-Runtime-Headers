// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLLAZYUNIONBATCHPROVIDER_H
#define MLLAZYUNIONBATCHPROVIDER_H

@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface MLLazyUnionBatchProvider : NSObject <MLBatchProvider>



@property (readonly, nonatomic) NSInteger count;
@property (retain, nonatomic) NSObject<MLBatchProvider> *first; // ivar: _first
@property (retain, nonatomic) NSObject<MLBatchProvider> *second; // ivar: _second


-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)initWithFeaturesFrom:(id)arg0 addedToFeaturesFrom:(id)arg1 error:(*id)arg2 ;


@end


#endif
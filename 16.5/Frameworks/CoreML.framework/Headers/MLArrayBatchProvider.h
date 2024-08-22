// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLARRAYBATCHPROVIDER_H
#define MLARRAYBATCHPROVIDER_H

@class NSArray;
@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface MLArrayBatchProvider : NSObject <MLBatchProvider>



@property (readonly, nonatomic) NSArray *array; // ivar: _array
@property (readonly, nonatomic) NSInteger count;


-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithFeatureProviderArray:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLINDEXEDBATCHPROVIDER_H
#define MLINDEXEDBATCHPROVIDER_H

@class NSArray;
@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface MLIndexedBatchProvider : NSObject <MLBatchProvider>



@property (readonly, nonatomic) NSInteger count;
@property (retain, nonatomic) NSObject<MLBatchProvider> *fullBatch; // ivar: _fullBatch
@property (retain, nonatomic) NSArray *indices; // ivar: _indices


-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)initWithBatch:(id)arg0 indices:(id)arg1 error:(*id)arg2 ;


@end


#endif
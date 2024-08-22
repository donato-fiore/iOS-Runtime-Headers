// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASBLOOMFILTERFORWRITING_H
#define _PASBLOOMFILTERFORWRITING_H

@class PASBloomFilter;



@interface _PASBloomFilterForWriting : PASBloomFilter



+(id)bloomFilterInMemoryWithNumberOfValuesN:(NSUInteger)arg0 errorRateP:(float)arg1 ;
-(BOOL)saveToFile:(id)arg0 ;
-(void)setWithHashes:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASBLOOMFILTERDUMMY_H
#define _PASBLOOMFILTERDUMMY_H

@class PASBloomFilter;



@interface _PASBloomFilterDummy : PASBloomFilter {
    BOOL _result;
}




+(id)instanceThatAlwaysReturns:(BOOL)arg0 ;
-(BOOL)getWithHashes:(id)arg0 ;
-(id)initWithResult:(BOOL)arg0 ;


@end


#endif
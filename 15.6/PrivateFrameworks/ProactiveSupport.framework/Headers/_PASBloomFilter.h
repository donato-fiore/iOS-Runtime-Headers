// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASBLOOMFILTER_H
#define _PASBLOOMFILTER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _PASBloomFilter : NSObject {
    *unk _computeHashes;
    NSData *_data;
    unsigned int _numBits;
    int _numHashFunctions;
    int _hashArrayLength;
}




+(id)bloomFilterWithData:(id)arg0 ;
+(id)bloomFilterWithPathToFile:(id)arg0 ;
-(BOOL)getWithHashes:(id)arg0 ;
-(id)_computeHashesWithSeed:(int)arg0 bytes:(*void)arg1 length:(NSUInteger)arg2 reuse:(id)arg3 ;
-(id)combineHashesWithSeed:(int)arg0 hashA:(id)arg1 hashB:(id)arg2 reuse:(id)arg3 ;
-(id)computeHashesForString:(id)arg0 reuse:(id)arg1 ;
-(id)computeHashesWithSeed:(int)arg0 forData:(id)arg1 reuse:(id)arg2 ;
-(id)init;
-(id)initDummy;
-(id)initWithData:(id)arg0 numBits:(unsigned int)arg1 hashFunctionCode:(unsigned int)arg2 numHashFunctions:(int)arg3 ;
-(id)newHashesArray;
-(int)numHashes;


@end


#endif
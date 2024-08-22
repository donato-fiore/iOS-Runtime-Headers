// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NBBLOOMFILTERREADER_H
#define NBBLOOMFILTERREADER_H


#import <Foundation/Foundation.h>

#import "NBObjCBloomFilterReader.h"

@interface NBBloomFilterReader : NSObject

@property (readonly, nonatomic) NBObjCBloomFilterReader *bloomFilterReader; // ivar: _bloomFilterReader


-(BOOL)maybeContainsString:(id)arg0 ;
-(id)initWithData:(id)arg0 hashFunctionCount:(NSUInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13CDMFOUNDATION23CDMCATISWIFTBLOOMFILTER_H
#define _TTC13CDMFOUNDATION23CDMCATISWIFTBLOOMFILTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC13CDMFoundation23CDMCATISwiftBloomFilter : NSObject {
    ? bitVector;
    ? numberOfBits;
    ? numberOfHashes;
    ? seed;
    ? expectedNumberOfItems;
    ? numberOfItems;
    ? name;
    ? expectedItemsBuffer;
}


@property (nonatomic, readonly) CGFloat falsePositiveRate; // ivar: falsePositiveRate
@property (nonatomic, copy) NSString *name;


-(BOOL)containsWithData:(id)arg0 ;
-(id)init;


@end


#endif
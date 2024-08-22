// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDBREACHBLOOMFILTER_H
#define WBSPASSWORDBREACHBLOOMFILTER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachBloomFilter : NSObject {
    unsigned int _capacity;
    unsigned int _errorDenominator;
    unsigned int _hashCount;
    unsigned int _bucketCount;
    NSData *_bucketData;
}


@property (readonly, nonatomic) NSData *serializedRepresentation;


-(BOOL)_getBucketAtIndex:(unsigned int)arg0 ;
-(BOOL)containsData:(id)arg0 ;
-(BOOL)containsLowercaseHexStringForData:(id)arg0 ;
-(id)description;
-(id)initWithCapacity:(unsigned int)arg0 errorDenominator:(unsigned int)arg1 bucketData:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(void)_enumerateBucketIndexesForData:(id)arg0 withBlock:(id)arg1 ;
-(void)_setBucketAtIndex:(unsigned int)arg0 inBuffer:(char *)arg1 ;
-(void)addData:(id)arg0 ;


@end


#endif
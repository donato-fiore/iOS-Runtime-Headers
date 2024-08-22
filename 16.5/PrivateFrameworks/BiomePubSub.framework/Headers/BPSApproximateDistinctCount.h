// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSAPPROXIMATEDISTINCTCOUNT_H
#define BPSAPPROXIMATEDISTINCTCOUNT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BPSApproximateDistinctCount : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    *hll_state _hllState;
}


@property (nonatomic) CGFloat approximateDistinctCount; // ivar: _approximateDistinctCount
@property (nonatomic) BOOL countMapFull; // ivar: _countMapFull


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHllState:(struct hll_state *)arg0 ;
-(void)addData:(id)arg0 ;
-(void)addValue:(unsigned int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)printState;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHISTOGRAMDATA_H
#define ATXHISTOGRAMDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHistogramData : NSObject <NSSecureCoding>

 {
    HDGuardedData _private_unsafeGuardedData;
    unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>>> _guardedData;
}




+(BOOL)supportsSecureCoding;
-(float)entropyWhereA:(unsigned short)arg0 b:(unsigned short)arg1 ;
-(float)lookupSmoothedWithBucketCount:(unsigned short)arg0 distanceScale:(float)arg1 a:(unsigned short)arg2 b:(unsigned short)arg3 ;
-(float)lookupUnsmoothedA:(unsigned short)arg0 b:(unsigned short)arg1 ;
-(id)aSet;
-(id)bSet;
-(id)init;
-(id)initWithCategoricalHistogram:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeHistogram:(id)arg0 ;
-(int)countWhereA:(unsigned short)arg0 b:(unsigned short)arg1 ;
-(void)add:(float)arg0 a:(unsigned short)arg1 b:(unsigned short)arg2 ;
-(void)applyPermutationToA:(id)arg0 ;
-(void)clear;
-(void)decayByFactor:(float)arg0 ;
-(void)decayWithHalfLifeInDays:(float)arg0 ;
-(void)deleteWhereA:(unsigned short)arg0 b:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerate:(id)arg0 ;


@end


#endif
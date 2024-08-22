// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCBCORECRYPTOECSCALAR_H
#define CKCBCORECRYPTOECSCALAR_H


#import <Foundation/Foundation.h>


@interface CKCBCorecryptoECScalar : NSObject

@property (readonly, nonatomic) *NSUInteger corecryptoScalar; // ivar: _corecryptoScalar
@property (readonly, nonatomic) *ccec_cp group; // ivar: _group


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)scalarAllocationSizeForGroup:(struct ccec_cp *)arg0 ;
-(id)add:(id)arg0 corecryptoError:(*int)arg1 ;
-(id)initWithData:(id)arg0 inGroup:(struct ccec_cp *)arg1 reduction:(BOOL)arg2 corecryptoError:(*int)arg3 ;
-(id)initWithRandomScalarInGroup:(struct ccec_cp *)arg0 ;
-(id)initWithScalarPointer:(*NSUInteger)arg0 forGroup:(struct ccec_cp *)arg1 ;
-(id)inverseModOrder;
-(id)mapToCurve_SSWU_RandomOracle;
-(id)multiply:(id)arg0 corecryptoError:(*int)arg1 ;
-(id)serializedData;
-(id)sub:(id)arg0 corecryptoError:(*int)arg1 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMPROXPDP_H
#define CMPROXPDP_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMProxPDP : NSObject <NSSecureCoding, NSCopying>

 {
    NSNumber *fTimestamp;
    NSNumber *fIntensity;
    NSNumber *fIntensityCalDelta;
    NSNumber *fIntensityBaselineDelta;
    NSNumber *fAmbient;
    NSNumber *fPocketProbability;
    NSNumber *fBaselineConfidence;
    NSNumber *fRxNtcC;
    NSNumber *fScanFlags;
    NSNumber *fPocketFlag;
}


@property (readonly, nonatomic) NSNumber *ambient;
@property (readonly, nonatomic) NSNumber *baselineConfidence;
@property (readonly, nonatomic) NSNumber *intensity;
@property (readonly, nonatomic) NSNumber *intensityBaselineDelta;
@property (readonly, nonatomic) NSNumber *intensityCalDelta;
@property (readonly, nonatomic) NSNumber *pocketFlag;
@property (readonly, nonatomic) NSNumber *pocketProbability;
@property (readonly, nonatomic) NSNumber *rxNtcC;
@property (readonly, nonatomic) NSNumber *scanFlags;
@property (readonly, nonatomic) NSNumber *timestamp;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 intensity:(float)arg1 intensityCalDelta:(float)arg2 intensityBaselineDelta:(float)arg3 ambient:(float)arg4 pocketProbability:(float)arg5 baselineConfidence:(float)arg6 rxNtcC:(float)arg7 scanFlags:(BOOL)arg8 pocketFlag:(BOOL)arg9 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
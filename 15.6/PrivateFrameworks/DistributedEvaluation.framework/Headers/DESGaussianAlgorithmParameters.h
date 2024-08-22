// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESGAUSSIANALGORITHMPARAMETERS_H
#define DESGAUSSIANALGORITHMPARAMETERS_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol AlgorithmParametersProtocol;

#import <Foundation/Foundation.h>


@interface DESGaussianAlgorithmParameters : NSObject <AlgorithmParametersProtocol>

 {
    CGFloat _epsilon;
    CGFloat _delta;
    NSMutableDictionary *_parameters;
    NSDictionary *_momentsAccountantParameters;
}


@property (readonly, nonatomic) CGFloat clippingBound; // ivar: _clippingBound
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) CGFloat sigma; // ivar: _sigma


+(void)initialize;
-(BOOL)calculateAndVerifyPerChunkClippingBoundsIn:(id)arg0 withOverallClippingBound:(CGFloat)arg1 ;
-(id)initWith:(id)arg0 epsilon:(CGFloat)arg1 delta:(CGFloat)arg2 clippingBound:(CGFloat)arg3 ;
-(id)initWith:(id)arg0 epsilon:(CGFloat)arg1 delta:(CGFloat)arg2 clippingBound:(CGFloat)arg3 momentsAccountantParameters:(id)arg4 ;
-(id)initWith:(id)arg0 recipe:(id)arg1 ;
-(void)addPerChunkParametersWith:(CGFloat)arg0 numChunks:(NSUInteger)arg1 ;


@end


#endif
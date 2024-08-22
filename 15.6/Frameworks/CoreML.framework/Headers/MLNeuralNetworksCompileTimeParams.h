// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLNEURALNETWORKSCOMPILETIMEPARAMS_H
#define MLNEURALNETWORKSCOMPILETIMEPARAMS_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLNeuralNetworksCompileTimeParams : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *lossParameters; // ivar: _lossParameters
@property (nonatomic) NSInteger lossType; // ivar: _lossType
@property (retain, nonatomic) NSDictionary *optimizerParameters; // ivar: _optimizerParameters
@property (nonatomic) NSInteger optimizerType; // ivar: _optimizerType
@property (retain, nonatomic) NSArray *trainableLayerNames; // ivar: _trainableLayerNames
@property (retain, nonatomic) NSDictionary *updateParameters; // ivar: _updateParameters


+(BOOL)supportsSecureCoding;
-(BOOL)writeUpdatableParamsToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLossType:(NSInteger)arg0 optimizerType:(NSInteger)arg1 optimizerParameters:(id)arg2 lossParameters:(id)arg3 trainableLayerNames:(id)arg4 updateParameters:(id)arg5 ;
-(id)unarchiveUpdatableParamsAtURL:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
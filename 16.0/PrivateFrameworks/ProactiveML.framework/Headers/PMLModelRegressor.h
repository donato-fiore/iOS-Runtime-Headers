// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLMODELREGRESSOR_H
#define PMLMODELREGRESSOR_H

@class NSString;
@protocol PMLPlistAndChunksSerializableProtocol;

#import <Foundation/Foundation.h>

#import "PMLDenseVector.h"

@interface PMLModelRegressor : NSObject <PMLPlistAndChunksSerializableProtocol>

 {
    PMLDenseVector *_data;
}


@property (readonly, nonatomic) int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)modelRegressorFromFloat:(float)arg0 ;
+(id)modelRegressorFromFloats:(id)arg0 ;
+(id)regressorVectorFrom:(id)arg0 ;
-(*float)inverseValues;
-(*float)values;
-(id)denseVector;
-(id)init;
-(id)initFromDictionary:(id)arg0 ;
-(id)initModelRegressorFromFloats:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithRegressorFromFloat:(float)arg0 ;
-(id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg0 ;
-(id)regressorFor:(int)arg0 ;
-(id)toDictionary;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif
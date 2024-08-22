// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPMODELBUNDLE_H
#define UPMODELBUNDLE_H


#import <Foundation/Foundation.h>

#import "UPCalibrationModel.h"
#import "UPParserModel.h"
#import "UPPreprocessor.h"

@interface UPModelBundle : NSObject

@property (readonly, nonatomic) UPCalibrationModel *calibrationModel; // ivar: _calibrationModel
@property (readonly, nonatomic) UPParserModel *parserModel; // ivar: _parserModel
@property (readonly, nonatomic) UPPreprocessor *preprocessor; // ivar: _preprocessor


-(id)initWithLoadedModelConfiguration:(id)arg0 parserModel:(id)arg1 calibrationModel:(id)arg2 ;
-(id)initWithPreprocessor:(id)arg0 parserModel:(id)arg1 calibrationModel:(id)arg2 ;


@end


#endif
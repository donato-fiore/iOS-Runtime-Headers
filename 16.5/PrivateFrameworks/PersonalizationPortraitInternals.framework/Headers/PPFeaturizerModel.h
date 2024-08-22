// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPFEATURIZERMODEL_H
#define PPFEATURIZERMODEL_H

@class NSString, NSArray;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>


@interface PPFeaturizerModel : NSObject <MLCustomModel>

 {
    NSString *_inputName;
    NSString *_outputName;
    NSString *_operation;
    NSArray *_param;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif
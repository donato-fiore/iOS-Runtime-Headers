// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPREGEXMODEL_H
#define PPREGEXMODEL_H

@class NSRegularExpression, NSString;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>


@interface PPRegexModel : NSObject <MLCustomModel>

 {
    NSRegularExpression *_regex;
    NSString *_inputName;
    NSString *_outputName;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif
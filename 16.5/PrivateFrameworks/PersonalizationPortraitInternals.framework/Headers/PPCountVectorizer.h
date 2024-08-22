// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCOUNTVECTORIZER_H
#define PPCOUNTVECTORIZER_H

@class NSString, NSMutableDictionary;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>


@interface PPCountVectorizer : NSObject <MLCustomModel>

 {
    NSString *_inputName;
    NSString *_outputName;
    NSMutableDictionary *_vocabulary;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTEXTPREDICTOR_H
#define PPCONTEXTPREDICTOR_H

@class MLModel, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPContextPredictor : NSObject {
    MLModel *_mlModel;
    NSString *_language;
    NSObject<OS_dispatch_queue> *_coremlQueue;
}




-(id)contextForSentence:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 ;
-(id)initWithMLModel:(id)arg0 language:(id)arg1 ;


@end


#endif
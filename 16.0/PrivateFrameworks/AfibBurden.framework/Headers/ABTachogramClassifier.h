// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABTACHOGRAMCLASSIFIER_H
#define ABTACHOGRAMCLASSIFIER_H


#import <Foundation/Foundation.h>


@interface ABTachogramClassifier : NSObject {
    unique_ptr<Tellurium::tellurium_classifier_t, std::default_delete<Tellurium::tellurium_classifier_t>> _classifier;
}




-(id)classifyTachogram:(id)arg0 ;
-(id)init;
-(void)logToFileForTacho:(*void)arg0 withClassification:(id)arg1 ;


@end


#endif
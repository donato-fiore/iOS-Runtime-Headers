// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREPREDICTIONEXEMPTTERMSDETECTOR_H
#define PREPREDICTIONEXEMPTTERMSDETECTOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PREPredictionExemptTermsDetector : NSObject {
    NSDictionary *_languageToExemptTerms;
}




-(BOOL)_warmTermsIfNecessary;
-(BOOL)checkForExemptContentInText:(id)arg0 languageCode:(id)arg1 ;
-(id)init;


@end


#endif
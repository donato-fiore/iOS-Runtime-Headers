// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNLPPOMMESSERVERCLASSIFIER_H
#define SNLPPOMMESSERVERCLASSIFIER_H



#import "SNLPITFMClassifier.h"

@interface SNLPPommesServerClassifier : SNLPITFMClassifier

@property (nonatomic) float confidenceThreshold; // ivar: _confidenceThreshold


+(id)classifierWithPathURL:(id)arg0 error:(*id)arg1 ;
-(id)responseForRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif
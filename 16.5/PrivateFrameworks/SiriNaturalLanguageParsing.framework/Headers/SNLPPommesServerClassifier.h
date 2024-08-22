// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLPPOMMESSERVERCLASSIFIER_H
#define SNLPPOMMESSERVERCLASSIFIER_H



#import "SNLPITFMClassifier.h"

@interface SNLPPommesServerClassifier : SNLPITFMClassifier

@property (nonatomic) float confidenceThreshold; // ivar: _confidenceThreshold


+(id)_initializationBlock:(SEL)arg0 ;
+(id)classifierWithPathURL:(id)arg0 error:(*id)arg1 ;
-(id)responseForRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif
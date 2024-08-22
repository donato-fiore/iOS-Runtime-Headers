// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPCOMMSAFETYTEXTANALYZERMODEL_H
#define CVNLPCOMMSAFETYTEXTANALYZERMODEL_H

@class NLModel, NSString;

#import <Foundation/Foundation.h>


@interface CVNLPCommSafetyTextAnalyzerModel : NSObject {
    NLModel *_model;
    NSString *_className;
    CGFloat _threshold;
}




-(BOOL)detectSensitivityForString:(id)arg0 ;
-(id)description;
-(id)initWithModel:(id)arg0 className:(id)arg1 threshold:(CGFloat)arg2 ;


@end


#endif
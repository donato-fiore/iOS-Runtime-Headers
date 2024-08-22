// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWEBPAGETOTRAININGTEXT_H
#define WFWEBPAGETOTRAININGTEXT_H

@class NSString;


#import "WFWebPageDecorator.h"

@interface WFWebPageToTrainingText : WFWebPageDecorator {
    NSString *categorySignature;
}




+(id)documentSignature;
+(id)signatureForCategory:(NSUInteger)arg0 ;
-(id)categorySignature;
-(id)rawPlainText;
-(void)dealloc;
-(void)setCategorySignature:(id)arg0 ;


@end


#endif
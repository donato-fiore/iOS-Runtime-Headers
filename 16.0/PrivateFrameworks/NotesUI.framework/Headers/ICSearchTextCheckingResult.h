// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSEARCHTEXTCHECKINGRESULT_H
#define ICSEARCHTEXTCHECKINGRESULT_H

@class NSTextCheckingResult, NSString;



@interface ICSearchTextCheckingResult : NSTextCheckingResult

@property (retain, nonatomic) NSString *csEvaluatorMatchString; // ivar: _csEvaluatorMatchString
@property (nonatomic) _NSRange ic_range; // ivar: _ic_range


-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 csEvaluatorMatchString:(id)arg1 ;
-(struct _NSRange )range;


@end


#endif
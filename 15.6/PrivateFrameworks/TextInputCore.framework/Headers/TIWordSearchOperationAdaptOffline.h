// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIWORDSEARCHOPERATIONADAPTOFFLINE_H
#define TIWORDSEARCHOPERATIONADAPTOFFLINE_H

@class NSString;


#import "TIWordSearchOperation.h"
#import "TILanguageModelAdaptationContext.h"
#import "TIMecabraWrapper.h"

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation

@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // ivar: _adaptationContext
@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // ivar: _mecabraWrapper
@property (copy, nonatomic) NSString *paragraph; // ivar: _paragraph
@property (nonatomic) CGFloat timeStamp; // ivar: _timeStamp


-(id)initWithWordSearch:(id)arg0 paragraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(CGFloat)arg3 ;
-(void)cancel;
-(void)perform;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGHANDLE_H
#define TILANGUAGEMODELOFFLINELEARNINGHANDLE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "TILanguageModelAdaptationContext.h"
#import "TIInputMode.h"

@interface TILanguageModelOfflineLearningHandle : NSObject

@property (copy, nonatomic) TILanguageModelAdaptationContext *currentAdaptationContext; // ivar: _currentAdaptationContext
@property (readonly, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (copy, nonatomic) NSDate *lastAdaptationDate; // ivar: _lastAdaptationDate
@property (nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(id)handleForInputMode:(id)arg0 ;
+(id)handleForLanguageLikelihood;
-(id)initWithInputMode:(id)arg0 ;
-(void)adaptToParagraph:(id)arg0 timeStamp:(CGFloat)arg1 adaptationType:(int)arg2 ;
-(void)didFinishLearning;
-(void)load;
-(void)updateAdaptationContext:(id)arg0 ;


@end


#endif
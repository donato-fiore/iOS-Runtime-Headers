// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGHANDLEFAVONIUS_H
#define TILANGUAGEMODELOFFLINELEARNINGHANDLEFAVONIUS_H



#import "TILanguageModelOfflineLearningHandle.h"

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle

@property (nonatomic) shared_ptr<KB::LanguageModel> currentModel; // ivar: _currentModel
@property (readonly, nonatomic) RefPtr<KB::DictionaryContainer> dictionaries; // ivar: _dictionaries


-(id)initWithInputMode:(id)arg0 ;
-(void)adaptToParagraph:(id)arg0 timeStamp:(CGFloat)arg1 adaptationType:(int)arg2 ;
-(void)didFinishLearning;
-(void)load;
-(void)updateAdaptationContext:(id)arg0 ;


@end


#endif
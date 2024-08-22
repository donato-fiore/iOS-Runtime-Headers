// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINPUTMANAGER_MUL_H
#define TIKEYBOARDINPUTMANAGER_MUL_H



#import "TIKeyboardInputManager.h"

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    BOOL _isSuspended;
}




-(*void)languageModelContainer;
-(BOOL)shouldUpdateDictionary;
-(BOOL)updateLanguageModelForKeyboardState;
-(float)weightForInputMode:(id)arg0 ;
-(id)keyboardConfiguration;
-(id)resourceInputModes;
-(struct ? )lexiconInfoForInputMode:(id)arg0 ;
-(struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> )lexiconInformationVector;
-(unsigned int)lexiconIDForInputMode:(id)arg0 ;
-(void)didUpdateInputModeProbabilities:(id)arg0 ;
-(void)didUpdateInputModes:(id)arg0 ;
-(void)enumerateInputModesWithBlock:(id)arg0 ;
-(void)loadDictionaries;
-(void)resume;
-(void)suspend;
-(void)updateLanguagePriors;


@end


#endif
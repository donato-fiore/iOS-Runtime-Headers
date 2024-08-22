// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTRANSLITERATEISOLATEDCONFUSABLECHARACTERSSTEP_H
#define CHTRANSLITERATEISOLATEDCONFUSABLECHARACTERSSTEP_H



#import "CHPostprocessingStep.h"

@interface CHTransliterateIsolatedConfusableCharactersStep : CHPostprocessingStep {
    map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> _transliterationMap;
}




-(id)handleConfusableIsolatedCharacterToken:(id)arg0 ;
-(id)init;
-(id)process:(id)arg0 ;


@end


#endif
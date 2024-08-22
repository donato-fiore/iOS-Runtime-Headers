// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGRADARSUGGESTION_H
#define SGRADARSUGGESTION_H



#import "SGRadarSuggestionBase.h"

@interface SGRadarSuggestion : SGRadarSuggestionBase



+(id)tapToRadarImage;
-(id)_writeEMLtoDiskForMessageWithIdentifier:(id)arg0 ;
-(id)suggestionCategoryImage;
-(id)suggestionImage;
-(id)suggestionPrimaryAction;
-(void)_dismissViewController:(id)arg0 andSignalCompletionWithResult:(BOOL)arg1 ;


@end


#endif
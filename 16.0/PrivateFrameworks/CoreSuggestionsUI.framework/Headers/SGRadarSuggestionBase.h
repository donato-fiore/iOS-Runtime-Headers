// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGRADARSUGGESTIONBASE_H
#define SGRADARSUGGESTIONBASE_H

@class NSString;
@protocol SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions, SGSuggestionDelegate;

#import <Foundation/Foundation.h>


@interface SGRadarSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>

 {
    NSString *_sourceMessageId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (readonly) Class superclass;


-(NSInteger)suggestionActionButtonType;
-(id)initWithSourceMessageId:(id)arg0 ;
-(id)primaryActionTitle;
-(id)realtimeSuggestion;
-(id)suggestionCategory;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg0 ;
-(id)suggestionCategorySubtitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg0 ;
-(id)suggestionDismissAction;
-(id)suggestionPrimaryAction;
-(id)suggestionSubtitle;
-(id)suggestionTitle;
-(id)suggestionsSecondTitle;


@end


#endif
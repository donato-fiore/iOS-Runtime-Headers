// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCONTACTSUGGESTIONBASE_H
#define SGCONTACTSUGGESTIONBASE_H

@class SGRealtimeContact, NSString;
@protocol SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions, SGSuggestionDelegate;

#import <Foundation/Foundation.h>


@interface SGContactSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>

 {
    SGRealtimeContact *_realtimeContact;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (readonly) Class superclass;


+(id)contactImage;
+(void)confirm:(BOOL)arg0 suggestion:(id)arg1 completion:(id)arg2 ;
-(NSInteger)suggestionActionButtonType;
-(NSInteger)suggestionCategoryActionButtonType;
-(id)ignoreActionButtonTitleForContactSuggestion:(id)arg0 ;
-(id)initWithRealtimeContact:(id)arg0 ;
-(id)mailingAddressFromPostalAddress:(id)arg0 ;
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
-(id)titleForCategory:(NSInteger)arg0 ;
-(struct ? )subtitleAndCategoryFor:(id)arg0 ;


@end


#endif
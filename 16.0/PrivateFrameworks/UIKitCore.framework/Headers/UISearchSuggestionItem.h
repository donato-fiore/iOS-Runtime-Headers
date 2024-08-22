// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEARCHSUGGESTIONITEM_H
#define UISEARCHSUGGESTIONITEM_H

@class NSString, NSAttributedString;
@protocol UISearchSuggestion;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UISearchSuggestionItem : NSObject <UISearchSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly, nonatomic) NSAttributedString *localizedAttributedSuggestion; // ivar: _localizedAttributedSuggestion
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic) NSString *localizedSuggestion; // ivar: _localizedSuggestion
@property (retain, nonatomic) id *representedObject; // ivar: _representedObject
@property (readonly) Class superclass;


+(id)suggestionWithLocalizedAttributedSuggestion:(id)arg0 ;
+(id)suggestionWithLocalizedAttributedSuggestion:(id)arg0 descriptionString:(id)arg1 ;
+(id)suggestionWithLocalizedAttributedSuggestion:(id)arg0 descriptionString:(id)arg1 iconImage:(id)arg2 ;
+(id)suggestionWithLocalizedSuggestion:(id)arg0 ;
+(id)suggestionWithLocalizedSuggestion:(id)arg0 descriptionString:(id)arg1 ;
+(id)suggestionWithLocalizedSuggestion:(id)arg0 descriptionString:(id)arg1 iconImage:(id)arg2 ;
-(id)initWithLocalizedAttributedSuggestion:(id)arg0 ;
-(id)initWithLocalizedAttributedSuggestion:(id)arg0 localizedDescription:(id)arg1 ;
-(id)initWithLocalizedAttributedSuggestion:(id)arg0 localizedDescription:(id)arg1 iconImage:(id)arg2 ;
-(id)initWithLocalizedSuggestion:(id)arg0 ;
-(id)initWithLocalizedSuggestion:(id)arg0 localizedDescription:(id)arg1 ;
-(id)initWithLocalizedSuggestion:(id)arg0 localizedDescription:(id)arg1 iconImage:(id)arg2 ;


@end


#endif
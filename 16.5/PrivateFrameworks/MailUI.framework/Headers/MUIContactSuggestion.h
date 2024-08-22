// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUICONTACTSUGGESTION_H
#define MUICONTACTSUGGESTION_H

@class NSString, NSArray, CSSuggestion;


#import "MUISearchAtomSuggestion.h"
#import "MUISearchSuggestionCategory.h"

@interface MUIContactSuggestion : MUISearchAtomSuggestion {
    MUISearchSuggestionCategory *_category;
    NSString *_title;
    NSArray *_contactEmailAddresses;
    NSString *_contactIdentifier;
    CSSuggestion *_spotlightSuggestion;
}


@property (readonly, copy, nonatomic) NSArray *attributeValues; // ivar: _attributeValues
@property (readonly, nonatomic) NSArray *contactEmailAddresses;
@property (readonly, nonatomic) NSString *contactIdentifier;


+(id)suggestionWithTitle:(id)arg0 contactEmailAddresses:(id)arg1 contactIdentifier:(id)arg2 spotlightSuggestion:(id)arg3 ;
-(id)category;
-(id)initWithTitle:(id)arg0 contactEmailAddresses:(id)arg1 contactIdentifier:(id)arg2 spotlightSuggestion:(id)arg3 ;
-(id)spotlightSuggestion;
-(id)subtitle;
-(id)title;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIGENERICSUGGESTION_H
#define MUIGENERICSUGGESTION_H

@class CSSuggestion, NSAttributedString, UIColor;


#import "MUISearchAtomSuggestion.h"

@interface MUIGenericSuggestion : MUISearchAtomSuggestion {
    CSSuggestion *_spotlightSuggestion;
    BOOL _isAllMailboxes;
}


@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) UIColor *imageTintColor;
@property (readonly, nonatomic) BOOL isRecent;
@property (readonly, nonatomic) NSInteger resultCount;


+(BOOL)supportsSecureCoding;
+(id)allMailboxesSuggestionWithSpotlightSuggestion:(id)arg0 ;
+(id)genericSuggestionWithSpotlightSuggestion:(id)arg0 ;
-(BOOL)isAllMailboxes;
-(id)_allMailboxesSuggestionTitle;
-(id)_joinRecentsTitleComponents:(id)arg0 ;
-(id)_recentsTitle;
-(id)accessibilityDescription;
-(id)category;
-(id)contactIdentifier;
-(id)description;
-(id)image;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpotlightSuggestion:(id)arg0 isAllMailboxes:(BOOL)arg1 ;
-(id)spotlightSuggestion;
-(id)subtitle;
-(id)title;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
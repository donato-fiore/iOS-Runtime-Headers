// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17CORESUGGESTIONSUI15SGBANNERCONTENT_H
#define _TTC17CORESUGGESTIONSUI15SGBANNERCONTENT_H

@class NSString, NSAttributedString, UIColor, UIVisualEffectView, NSArray;
@protocol SGSuggestionDelegate, SGSuggestion;

#import <Foundation/Foundation.h>

#import "SGBannerDividerParameter.h"
#import "SGSuggestionAction.h"

@interface _TtC17CoreSuggestionsUI15SGBannerContent : NSObject {
    ? title;
    ? subtitle;
    ? images;
    ? actionTitle;
    ? imageSGViews;
    ? listTitle;
}


@property (nonatomic) NSInteger accessoryType; // ivar: accessoryType
@property (nonatomic) NSInteger actionButtonType; // ivar: actionButtonType
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, retain) NSAttributedString *attributedSubtitle; // ivar: attributedSubtitle
@property (nonatomic, retain) UIColor *backgroundColor; // ivar: backgroundColor
@property (nonatomic, retain) UIVisualEffectView *backgroundVisualEffectView; // ivar: backgroundVisualEffectView
@property (nonatomic, retain) SGBannerDividerParameter *bannerDivider; // ivar: bannerDivider
@property (nonatomic) CGFloat closeButtonWidth; // ivar: closeButtonWidth
@property (nonatomic) CGFloat closeButtonXAnchorOffset; // ivar: closeButtonXAnchorOffset
@property (nonatomic, weak) NSObject<SGSuggestionDelegate> *delegate; // ivar: delegate
@property (nonatomic, retain) SGSuggestionAction *dismissAction; // ivar: dismissAction
@property (nonatomic, copy) NSArray *imageSGViews;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *listTitle;
@property (nonatomic, retain) SGSuggestionAction *primaryAction; // ivar: primaryAction
@property (nonatomic) CGFloat primaryActionButtonWidth; // ivar: primaryActionButtonWidth
@property (nonatomic) BOOL prominentActionButton; // ivar: prominentActionButton
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSObject<SGSuggestion> *suggestion; // ivar: suggestion
@property (nonatomic) BOOL suggestionCategorySupportsBatchDismissal; // ivar: suggestionCategorySupportsBatchDismissal
@property (nonatomic, copy) NSString *title;


-(id)init;


@end


#endif
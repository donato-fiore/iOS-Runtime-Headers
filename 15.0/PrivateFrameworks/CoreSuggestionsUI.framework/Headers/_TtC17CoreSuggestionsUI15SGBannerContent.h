// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17CORESUGGESTIONSUI15SGBANNERCONTENT_H
#define _TTC17CORESUGGESTIONSUI15SGBANNERCONTENT_H

@class NSString, NSAttributedString, NSArray;
@protocol SGSuggestionDelegate, SGSuggestion;

#import <Foundation/Foundation.h>


@interface _TtC17CoreSuggestionsUI15SGBannerContent : NSObject {
    ? title;
    ? subtitle;
    ? images;
    ? actionTitle;
}


@property (nonatomic) NSInteger accessoryType; // ivar: accessoryType
@property (nonatomic) NSInteger actionButtonType; // ivar: actionButtonType
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, retain) NSAttributedString *attributedSubtitle; // ivar: attributedSubtitle
@property (nonatomic) CGFloat closeButtonWidth; // ivar: closeButtonWidth
@property (nonatomic, weak) NSObject<SGSuggestionDelegate> *delegate; // ivar: delegate
@property (nonatomic, copy) NSArray *images;
@property (nonatomic) CGFloat primaryActionButtonWidth; // ivar: primaryActionButtonWidth
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSObject<SGSuggestion> *suggestion; // ivar: suggestion
@property (nonatomic, copy) NSString *title;


-(id)init;


@end


#endif
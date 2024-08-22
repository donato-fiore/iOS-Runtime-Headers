// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPROUTELABEL_H
#define MPROUTELABEL_H

@class UIView, NSString, UIFont, NSMutableSet, UILabel, BSUIEmojiLabelView, UIColor;


#import "MPAVRoute.h"

@interface MPRouteLabel : UIView {
    NSString *_designatedGroupLeaderName;
    NSString *_previousDesignatedGroupLeaderName;
    CGRect _previousBounds;
    UIFont *_previousFont;
    NSMutableSet *_previousRouteNames;
    BOOL _previousForcesUppercaseText;
    BOOL _previousDisplayAsSiriSuggestion;
    NSInteger _previousTruncationMode;
    NSMutableSet *_routeNames;
    UILabel *_sizingLabel;
}


@property (readonly, nonatomic) CGFloat _baselineOffsetFromBottom;
@property (nonatomic, setter=_setTextColorFollowsTintColor:) BOOL _textColorFollowsTintColor;
@property (retain, nonatomic) BSUIEmojiLabelView *contentView; // ivar: _contentView
@property (nonatomic) BOOL displayAsSiriSuggestion; // ivar: _displayAsSiriSuggestion
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) BOOL forcesUppercaseText; // ivar: _forcesUppercaseText
@property (nonatomic) NSInteger minimumEndCharacterCount; // ivar: _minimumEndCharacterCount
@property (retain, nonatomic) MPAVRoute *route; // ivar: _route
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) NSInteger truncationMode; // ivar: _truncationMode


-(BOOL)_labelFitsText:(id)arg0 withSize:(struct CGSize )arg1 ;
-(NSInteger)_compareLength:(id)arg0 with:(id)arg1 ;
-(id)_bestStringThatFitsSize:(struct CGSize )arg0 ;
-(id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)arg0 routeNamesText:(id)arg1 ;
-(id)_marketingNames;
-(id)_plusSeparatedRouteNames:(id)arg0 ;
-(id)_routeNamesSortedAlphanumeric:(id)arg0 ;
-(id)_routeNamesSortedLength:(id)arg0 ;
-(id)_truncateText:(id)arg0 by:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_labelSizeForText:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_routeDidChangeNotification:(id)arg0 ;
-(void)_updateRouteLabel;
-(void)_updateTitleIfNeeded;
-(void)addRouteName:(id)arg0 ;
-(void)addRouteNamesFromArray:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeRouteName:(id)arg0 ;
-(void)removeRouteNamesFromArray:(id)arg0 ;


@end


#endif
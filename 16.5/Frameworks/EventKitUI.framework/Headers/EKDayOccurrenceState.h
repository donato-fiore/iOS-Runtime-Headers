// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAYOCCURRENCESTATE_H
#define EKDAYOCCURRENCESTATE_H

@class UIColor, UIImage, NSString, NSAttributedString, EKEvent, UIFont, UITraitCollection;
@protocol EKMutableDayOccurrenceState;

#import <Foundation/Foundation.h>


@interface EKDayOccurrenceState : NSObject <EKMutableDayOccurrenceState>

 {
    BOOL _isPerformingChanges;
    BOOL _didChange;
}


@property (readonly, nonatomic) UIColor *backgroundColor;
@property (nonatomic) CGRect backgroundRect; // ivar: _backgroundRect
@property (nonatomic) NSInteger birthdayCount; // ivar: _birthdayCount
@property (readonly, nonatomic) UIImage *birthdayIcon;
@property (nonatomic) NSInteger colorBackgroundStyle; // ivar: _colorBackgroundStyle
@property (readonly, nonatomic) CGFloat colorBarThickness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *displayColor; // ivar: _displayColor
@property (readonly, nonatomic) CGFloat enoughHeightForOneLine;
@property (nonatomic) CGRect estimatedTextFrame; // ivar: _estimatedTextFrame
@property (readonly, nonatomic) NSUInteger fontCompressionDegree;
@property (readonly, nonatomic) BOOL hasNewTimeProposed;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isBirthday;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isDeclined;
@property (nonatomic) BOOL isDimmed; // ivar: _isDimmed
@property (nonatomic) BOOL isProposedTime; // ivar: _isProposedTime
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, nonatomic) BOOL isTentative;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isVibrant; // ivar: _isVibrant
@property (readonly, nonatomic) UIEdgeInsets languageAwareInsets;
@property (readonly, nonatomic) NSAttributedString *location;
@property (readonly, nonatomic) UIColor *locationTextColor;
@property (readonly, nonatomic) CGFloat minimumNaturalHeightAllText;
@property (readonly, nonatomic) BOOL needsReply;
@property (retain, nonatomic) EKEvent *occurrence; // ivar: _occurrence
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) NSString *participants; // ivar: _participants
@property (readonly, nonatomic) UIColor *participantsTextColor;
@property (readonly, nonatomic) UIFont *primaryTextFont;
@property (readonly, nonatomic) UIFont *secondaryTextFont;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) UIColor *statusTextColor;
@property (readonly, nonatomic) UIColor *strikethroughColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize textSpace;
@property (readonly, nonatomic) NSString *time;
@property (readonly, nonatomic) UIColor *timeTextColor;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (nonatomic) CGFloat topYBoundaryForText; // ivar: _topYBoundaryForText
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (nonatomic) CGFloat travelTime; // ivar: _travelTime
@property (nonatomic) CGFloat travelTimeHeight; // ivar: _travelTimeHeight
@property (nonatomic) BOOL usesSmallText; // ivar: _usesSmallText
@property (nonatomic) CGFloat visibleHeight; // ivar: _visibleHeight


+(BOOL)shouldShowTimeStringForOccurrence:(id)arg0 ;
+(struct UIEdgeInsets )defaultPadding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_verticalContentInset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOccurrenceView:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)performChangesWithItem:(id)arg0 viewContent:(id)arg1 ;
-(void)performChangesWithOccurrenceView:(id)arg0 ;
-(void)performChangesWithState:(id)arg0 ;


@end


#endif
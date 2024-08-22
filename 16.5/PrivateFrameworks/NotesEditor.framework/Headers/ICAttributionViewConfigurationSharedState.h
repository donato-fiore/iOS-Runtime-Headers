// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTRIBUTIONVIEWCONFIGURATIONSHAREDSTATE_H
#define ICATTRIBUTIONVIEWCONFIGURATIONSHAREDSTATE_H

@class UIImage, ICNote, NSDate, TTTextStorage, UIFont, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ICBaseTextView.h"

@interface ICAttributionViewConfigurationSharedState : NSObject

@property (copy, nonatomic) UIImage *collapsedDisclosureImage; // ivar: _collapsedDisclosureImage
@property (copy, nonatomic) UIImage *expandedDisclosureImage; // ivar: _expandedDisclosureImage
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (readonly, nonatomic) ICNote *note; // ivar: _note
@property (copy, nonatomic) NSDate *noteLastOpenedDate; // ivar: _noteLastOpenedDate
@property (readonly, nonatomic) TTTextStorage *noteTextStorage;
@property (nonatomic) CGFloat panelWidth; // ivar: _panelWidth
@property (copy, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (retain, nonatomic) id *primaryFontStorage; // ivar: _primaryFontStorage
@property (copy, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (retain, nonatomic) id *secondaryFontStorage; // ivar: _secondaryFontStorage
@property (readonly, weak, nonatomic) ICBaseTextView *textView; // ivar: _textView
@property (nonatomic) CGFloat topTextViewInset; // ivar: _topTextViewInset
@property (retain, nonatomic) NSMutableDictionary *userIDToHighlightColor; // ivar: _userIDToHighlightColor
@property (retain, nonatomic) NSMutableDictionary *userIDToShortName; // ivar: _userIDToShortName


-(BOOL)isTimestampUnread:(id)arg0 forUserID:(id)arg1 ;
-(id)disclosureImageWithSymbolName:(id)arg0 ;
-(id)highlightColorForUserID:(id)arg0 ;
-(id)initWithTextView:(id)arg0 note:(id)arg1 ;
-(id)shortNameForUserID:(id)arg0 ;
-(void)synchronouslyLoadDataForEditGroups:(id)arg0 ;
-(void)updateFontStorages;
-(void)updateFonts;
-(void)updateHighlightColorsForUserIDs:(id)arg0 ;
-(void)updateImages;
-(void)updateShortNamesForUserIDs:(id)arg0 ;


@end


#endif
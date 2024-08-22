// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIDETAILEDROWMODEL_H
#define SEARCHUIDETAILEDROWMODEL_H

@class SFActionItem, NSArray, SFImage, SFRichText, NSString, SFButton, MKSearchFoundationResult, SFFormattedText;


#import "SearchUICardSectionRowModel.h"

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel

@property (retain) SFActionItem *action; // ivar: _action
@property (retain) NSArray *buttonItems; // ivar: _buttonItems
@property BOOL buttonItemsAreTrailing; // ivar: _buttonItemsAreTrailing
@property (retain, nonatomic) NSArray *details; // ivar: _details
@property (retain) SFImage *fallbackImage; // ivar: _fallbackImage
@property (retain) SFRichText *footnote; // ivar: _footnote
@property (retain) NSString *footnoteButtonText; // ivar: _footnoteButtonText
@property BOOL isLocalApplicationResult; // ivar: _isLocalApplicationResult
@property (retain) SFButton *leadingButton; // ivar: _leadingButton
@property (retain, nonatomic) SFImage *leadingImage; // ivar: _leadingImage
@property (retain) MKSearchFoundationResult *mapsResult; // ivar: _mapsResult
@property (retain) NSString *nearbyBusinessesString; // ivar: _nearbyBusinessesString
@property (retain) NSString *pinText; // ivar: _pinText
@property BOOL preventThumbnailImageScaling; // ivar: _preventThumbnailImageScaling
@property (retain) SFFormattedText *secondaryTitle; // ivar: _secondaryTitle
@property (retain) SFImage *secondaryTitleImage; // ivar: _secondaryTitleImage
@property BOOL secondaryTitleIsDetached; // ivar: _secondaryTitleIsDetached
@property (retain) SFRichText *title; // ivar: _title
@property (retain) SFFormattedText *trailingBottomText; // ivar: _trailingBottomText
@property (retain) SFFormattedText *trailingMiddleText; // ivar: _trailingMiddleText
@property (retain) SFImage *trailingThumbnail; // ivar: _trailingThumbnail
@property (retain) SFFormattedText *trailingTopText; // ivar: _trailingTopText
@property BOOL truncateTitleMiddle; // ivar: _truncateTitleMiddle
@property BOOL useCompactDisplay; // ivar: _useCompactDisplay


+(BOOL)urlIsDraggable:(id)arg0 ;
-(BOOL)hasLeadingImage;
-(BOOL)isContact;
-(BOOL)isDraggable;
-(BOOL)isTappable;
-(Class)cardSectionViewClass;
-(id)contactIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionText;
-(id)dragAppBundleID;
-(id)dragText;
-(id)dragTitle;
-(id)dragURL;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 isInline:(BOOL)arg2 queryId:(NSUInteger)arg3 ;
-(id)initWithResult:(id)arg0 suggestion:(id)arg1 queryId:(NSUInteger)arg2 ;
-(id)populatedMapsCardSectionIfApplicable;
-(id)punchouts;
-(id)requestAppClipObjects;
-(id)richTextFromText:(id)arg0 ;
-(int)separatorStyle;
-(void)fillOutPropertiesForCardSection:(id)arg0 ;


@end


#endif
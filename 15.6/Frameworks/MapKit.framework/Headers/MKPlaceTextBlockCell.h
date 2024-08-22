// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACETEXTBLOCKCELL_H
#define MKPLACETEXTBLOCKCELL_H

@class NSString;


#import "MKPlaceSectionRowView.h"
#import "MKExpandingLabel.h"

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView

@property (nonatomic) BOOL constraintsAdded; // ivar: _constraintsAdded
@property (retain, nonatomic) MKExpandingLabel *textBlock; // ivar: _textBlock
@property (nonatomic, getter=isTextBlockExpanded) BOOL textBlockExpanded;
@property (copy, nonatomic) id *textBlockResizedBlock;
@property (copy, nonatomic) NSString *textBlockText; // ivar: _textBlockText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)updateConstraints;


@end


#endif
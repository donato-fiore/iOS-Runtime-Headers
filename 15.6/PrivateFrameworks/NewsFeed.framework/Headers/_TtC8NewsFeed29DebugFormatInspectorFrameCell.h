// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED29DEBUGFORMATINSPECTORFRAMECELL_H
#define _TTC8NEWSFEED29DEBUGFORMATINSPECTORFRAMECELL_H

@class UITableViewCell;



@interface _TtC8NewsFeed29DebugFormatInspectorFrameCell : UITableViewCell {
    ? displayFrame;
    ? delegate;
    ? frameLayer;
    ? frameLabel;
    ? zIndexLabel;
    ? borderLayers;
    ? hiddenButton;
    ? leftBorderButton;
    ? rightBorderButton;
    ? topBorderButton;
    ? bottomBorderButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)didTapBorderButtonWithSender:(id)arg0 ;
-(void)didTapHiddenButtonWithSender:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif
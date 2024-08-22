// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOPOSTCOMMENTTEXTENTRYCELL_H
#define PUPHOTOPOSTCOMMENTTEXTENTRYCELL_H

@class UITableViewCell;


#import "PUPhotoCommentEntryView.h"

@interface PUPhotoPostCommentTextEntryCell : UITableViewCell

@property (retain, nonatomic) PUPhotoCommentEntryView *textEntryView; // ivar: _textEntryView


+(CGFloat)heightForWidth:(CGFloat)arg0 ;
+(void)preferredContentSizeDidChange;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif
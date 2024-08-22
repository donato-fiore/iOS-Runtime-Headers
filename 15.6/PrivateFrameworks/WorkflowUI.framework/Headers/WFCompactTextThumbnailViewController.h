// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPACTTEXTTHUMBNAILVIEWCONTROLLER_H
#define WFCOMPACTTEXTTHUMBNAILVIEWCONTROLLER_H

@class NSString, UITextView;


#import "WFCompactThumbnailViewController.h"

@interface WFCompactTextThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (weak, nonatomic) UITextView *textView; // ivar: _textView


-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)preferredContentMode;
-(id)initWithString:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
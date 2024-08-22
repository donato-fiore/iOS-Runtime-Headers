// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSRINGSILENTFOOTER_H
#define SHSRINGSILENTFOOTER_H

@class UITableViewHeaderFooterView, NSString;
@protocol PSHeaderFooterView, UITextViewDelegate;



@interface SHSRingSilentFooter : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newImageView;
+(id)newTextView;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIPROFILESUMMARYVIEW_H
#define AAUIPROFILESUMMARYVIEW_H

@class UIView, UIImageView, UILabel;



@interface AAUIProfileSummaryView : UIView {
    UIImageView *_profileImageView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
}


@property (nonatomic) BOOL hidesPhoto; // ivar: _hidesPhoto
@property (nonatomic) CGFloat topPadding; // ivar: _topPadding


+(CGFloat)desiredHeight;
-(id)initWithName:(id)arg0 email:(id)arg1 image:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif
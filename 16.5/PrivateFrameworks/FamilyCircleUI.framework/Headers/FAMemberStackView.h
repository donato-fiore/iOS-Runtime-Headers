// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAMEMBERSTACKVIEW_H
#define FAMEMBERSTACKVIEW_H

@class UIView, UIStackView, UILabel, UIImageView, UIImage, UIButton, FAFamilyMember;
@protocol FAMemberStackViewDelegate;



@interface FAMemberStackView : UIView {
    UIStackView *vStack;
    UIView *background;
    UIStackView *profileScreenTimeView;
    UILabel *nameLabel;
    UILabel *typeLabel;
    UILabel *screenTimeLabel;
    UIImageView *imageView;
    UIImage *image;
    UIButton *selectMemberButton;
    FAFamilyMember *member;
}


@property (weak, nonatomic) NSObject<FAMemberStackViewDelegate> *delegate; // ivar: _delegate


-(id)_configureImageViewWithImage:(id)arg0 ;
-(id)_configureImageWithData:(id)arg0 ;
-(id)init;
-(void)_configureWithImage:(id)arg0 ;
-(void)memberCardTapped:(id)arg0 ;
-(void)setFamilyMemberModel:(id)arg0 ;
-(void)setupButton;
-(void)setupConstraints;
-(void)setupProfileScreenTimeView;
-(void)setupVStack;


@end


#endif
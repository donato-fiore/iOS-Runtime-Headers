// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSENTWITHSIRIVIEWCONTROLLER_H
#define CKSENTWITHSIRIVIEWCONTROLLER_H

@class UIViewController, UIView, UILabel, NSString, UIImageView, UIScrollView;
@protocol UIScrollViewDelegate;


#import "CKConversation.h"

@interface CKSentWithSiriViewController : UIViewController <UIScrollViewDelegate>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UILabel *contextDescriptionLabel; // ivar: _contextDescriptionLabel
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *heroImageView; // ivar: _heroImageView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)canBecomeFirstResponder;
-(id)initWithConversation:(id)arg0 ;
-(id)inputAccessoryViewController;
-(id)localizedStringWithLanguageCode:(id)arg0 format:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
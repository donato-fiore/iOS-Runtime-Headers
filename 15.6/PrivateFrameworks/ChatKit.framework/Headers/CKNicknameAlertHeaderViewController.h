// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKNICKNAMEALERTHEADERVIEWCONTROLLER_H
#define CKNICKNAMEALERTHEADERVIEWCONTROLLER_H

@class UIViewController, IMNickname;



@interface CKNicknameAlertHeaderViewController : UIViewController

@property (retain, nonatomic) IMNickname *nickname; // ivar: _nickname


-(id)initWithNickname:(id)arg0 ;
-(struct CGSize )_expectedSize;
-(void)loadView;
-(void)viewDidLayoutSubviews;


@end


#endif
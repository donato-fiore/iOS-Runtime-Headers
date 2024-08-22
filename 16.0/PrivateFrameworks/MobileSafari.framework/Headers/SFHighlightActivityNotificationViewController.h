// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFHIGHLIGHTACTIVITYNOTIFICATIONVIEWCONTROLLER_H
#define SFHIGHLIGHTACTIVITYNOTIFICATIONVIEWCONTROLLER_H

@class UIViewController, CNAvatarViewController, UILabel, CNContact, NSString;



@interface SFHighlightActivityNotificationViewController : UIViewController {
    CNAvatarViewController *_contactViewController;
    UILabel *_subtitleLabel;
}


@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *messageText; // ivar: _messageText
@property (readonly, copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithContact:(id)arg0 ;
-(id)initWithTitleText:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
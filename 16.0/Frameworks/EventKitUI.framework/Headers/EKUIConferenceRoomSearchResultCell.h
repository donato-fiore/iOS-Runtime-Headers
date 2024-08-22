// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUICONFERENCEROOMSEARCHRESULTCELL_H
#define EKUICONFERENCEROOMSEARCHRESULTCELL_H

@class UITableViewCell, UILabel, UIImageView, UIActivityIndicatorView;



@interface EKUIConferenceRoomSearchResultCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
}




-(id)description;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)reloadWithConferenceRoom:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)updateSeparatorInset;


@end


#endif
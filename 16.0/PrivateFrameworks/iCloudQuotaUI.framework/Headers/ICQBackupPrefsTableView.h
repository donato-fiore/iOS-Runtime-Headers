// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQBACKUPPREFSTABLEVIEW_H
#define ICQBACKUPPREFSTABLEVIEW_H

@class UITableView;



@interface ICQBackupPrefsTableView : UITableView {
    BOOL _scrollsOnNextResize;
}




-(void)scrollToBottomOnNextResize;
-(void)setContentSize:(struct CGSize )arg0 ;


@end


#endif
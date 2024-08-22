// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFHIGHLIGHTCONTACTLISTCELL_H
#define SFHIGHLIGHTCONTACTLISTCELL_H

@class UIControl, UIView, CNContact;
@protocol SFHighlightContactListCellDelegate;



@interface SFHighlightContactListCell : UIControl {
    UIView *_separator;
}


@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (weak, nonatomic) NSObject<SFHighlightContactListCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isFirstInList) BOOL firstInList; // ivar: _firstInList
@property (copy, nonatomic) id *infoViewControllerHandler; // ivar: _infoViewControllerHandler
@property (nonatomic, getter=isLastInList) BOOL lastInList; // ivar: _lastInList


-(id)initWithContact:(id)arg0 ;
-(void)_didReceiveTap:(id)arg0 ;
-(void)_updateMaskedCorners;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif
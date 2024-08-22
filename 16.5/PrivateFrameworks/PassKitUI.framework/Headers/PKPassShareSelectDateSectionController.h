// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHARESELECTDATESECTIONCONTROLLER_H
#define PKPASSSHARESELECTDATESECTIONCONTROLLER_H

@class NSDate;
@protocol PKDateSelectorCollectionViewCellDelegate, PKPassShareSelectDateSectionControllerDelegate;


#import "PKPassShareSectionController.h"

@interface PKPassShareSelectDateSectionController : PKPassShareSectionController <PKDateSelectorCollectionViewCellDelegate>

 {
    BOOL _selected;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
}


@property (weak, nonatomic) NSObject<PKPassShareSelectDateSectionControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)decorateListCell:(id)arg0 forScheduleRowItem:(id)arg1 ;
-(id)initWithDate:(id)arg0 minimumDate:(id)arg1 maximumDate:(id)arg2 delegate:(id)arg3 ;
-(void)_setDate:(id)arg0 ;
-(void)_setSelected:(id)arg0 ;
-(void)dateSelectorCollectionViewCell:(id)arg0 didUpdateDate:(id)arg1 ;
-(void)decorateCalendarCell:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)reloadItemsAnimated:(BOOL)arg0 ;


@end


#endif
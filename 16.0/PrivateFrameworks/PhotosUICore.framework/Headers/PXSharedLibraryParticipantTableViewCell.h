// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYPARTICIPANTTABLEVIEWCELL_H
#define PXSHAREDLIBRARYPARTICIPANTTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSString;
@protocol PXChangeObserver;


#import "PXRoundImageView.h"
#import "PXSharedLibraryParticipantTableCellModel.h"

@interface PXSharedLibraryParticipantTableViewCell : UITableViewCell <PXChangeObserver>

 {
    PXRoundImageView *_customAvatarImageView;
    UILabel *_localizedNameLabel;
    UILabel *_addressLabel;
}


@property (readonly, nonatomic) PXSharedLibraryParticipantTableCellModel *cellModel; // ivar: _cellModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateAddressLabel;
-(void)_updateAvatarView;
-(void)_updateLocalizedNameLabel;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif
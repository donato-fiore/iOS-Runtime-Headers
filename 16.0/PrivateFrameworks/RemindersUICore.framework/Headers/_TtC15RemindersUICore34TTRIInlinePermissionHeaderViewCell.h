// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15REMINDERSUICORE34TTRIINLINEPERMISSIONHEADERVIEWCELL_H
#define _TTC15REMINDERSUICORE34TTRIINLINEPERMISSIONHEADERVIEWCELL_H

@class NUITableViewContainerCell;
@protocol NUIContainerViewDelegate;



@interface _TtC15RemindersUICore34TTRIInlinePermissionHeaderViewCell : NUITableViewContainerCell <NUIContainerViewDelegate>

 {
    ? delegate;
    ? $__lazy_storage_$_iconView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_bodyLabel;
    ? $__lazy_storage_$_dismissButton;
    ? appliedConfiguration;
}




+(Class)containerViewClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif
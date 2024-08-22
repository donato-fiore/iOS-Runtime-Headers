// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI16ACTIONBUTTONCELL_H
#define _TTC15HEALTHRECORDSUI16ACTIONBUTTONCELL_H

@class UITableViewCell, UIImage, UILabel;



@interface _TtC15HealthRecordsUI16ActionButtonCell : UITableViewCell {
    ? titleLabelLeadingConstraint;
    ? iconView;
    ? nonBusyTitleLabelColor;
}


@property (nonatomic) BOOL actionEnabled; // ivar: actionEnabled
@property (nonatomic, retain) UIImage *icon; // ivar: icon
@property (nonatomic, readonly) UILabel *titleLabel; // ivar: titleLabel


+(id)defaultReuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setBusy:(BOOL)arg0 ;


@end


#endif
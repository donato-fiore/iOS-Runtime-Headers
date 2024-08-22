// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIPARTICIPANTCONTAINER_H
#define EKUIPARTICIPANTCONTAINER_H

@class UIView, NSMutableArray, UILabel, UINavigationController, EKParticipant;


#import "EKUILabeledAvatarView.h"

@interface EKUIParticipantContainer : UIView

@property (retain) EKUILabeledAvatarView *avatar; // ivar: _avatar
@property (retain) NSMutableArray *labelConstraints; // ivar: _labelConstraints
@property (retain) UILabel *nameLabel; // ivar: _nameLabel
@property (weak) UINavigationController *navController; // ivar: _navController
@property (retain) EKParticipant *participant; // ivar: _participant
@property (retain) UILabel *subLabel; // ivar: _subLabel


-(id)initWithParticipant:(id)arg0 viewController:(id)arg1 ;
-(void)setBusy:(BOOL)arg0 ;
-(void)singleTap:(id)arg0 ;
-(void)updateContentForSizeCategoryChange:(id)arg0 ;
-(void)updateSublabelWithState:(NSUInteger)arg0 ;


@end


#endif
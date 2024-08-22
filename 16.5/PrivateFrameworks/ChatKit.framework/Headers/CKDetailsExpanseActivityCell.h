// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSEXPANSEACTIVITYCELL_H
#define CKDETAILSEXPANSEACTIVITYCELL_H

@class UILabel, CNContact, TUConversation, NSString, LPLinkView;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsExpanseActivityCell : CKDetailsCell <CKDetailsCell>



@property (retain, nonatomic) UILabel *activityDescriptionLabel; // ivar: _activityDescriptionLabel
@property (retain, nonatomic) CNContact *contactSharingScreen; // ivar: _contactSharingScreen
@property (retain, nonatomic) TUConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScreenShare; // ivar: _isScreenShare
@property (retain, nonatomic) LPLinkView *lpLinkView; // ivar: _lpLinkView
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(CGFloat)buttonInteritemSpacing;
-(CGFloat)insetPadding;
-(CGFloat)interitemSpacing;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 conversation:(id)arg2 ;
-(void)addConstraints;
-(void)formatTitle;
-(void)layoutSubviews;
-(void)setupView;


@end


#endif
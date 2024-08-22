// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSAVATARVIEWCONTROLLER_H
#define CPSAVATARVIEWCONTROLLER_H

@class UIViewController, UIImageView, NSString, NSArray;
@protocol CPSEntityUpdateSupporting, CPEntityImageProviding;



@interface CPSAvatarViewController : UIViewController <CPSEntityUpdateSupporting>



@property (readonly, nonatomic) UIImageView *avatarImageView; // ivar: _avatarImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CPEntityImageProviding> *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (readonly) Class superclass;


-(id)initWithEntity:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(void)setupLayoutConstraints;
-(void)setupViews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateViews;
-(void)updateWithEntity:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSNAMEVIEWCONTROLLER_H
#define CPSNAMEVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UILabel, UIStackView;
@protocol CPSEntityUpdateSupporting, CPEntityNameProviding;



@interface CPSNameViewController : UIViewController <CPSEntityUpdateSupporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CPEntityNameProviding> *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (readonly, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (readonly, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *tertiaryLabel; // ivar: _tertiaryLabel


-(id)initWithEntity:(id)arg0 ;
-(void)setupLayoutConstraints;
-(void)setupViews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateViews;
-(void)updateWithEntity:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSTARKCONTACTINFOVIEWCONTROLLER_H
#define CNSTARKCONTACTINFOVIEWCONTROLLER_H

@class UIViewController, CNContact, NSString, NSLayoutYAxisAnchor, CNGeminiResult, NSArray, UILabel, UIStackView;
@protocol CNUIGeminiDataSourceDelegate;


#import "CNContactGeminiView.h"
#import "CNUIGeminiDataSource.h"

@interface CNStarkContactInfoViewController : UIViewController <CNUIGeminiDataSourceDelegate>



@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactGeminiView *contactGeminiView; // ivar: _contactGeminiView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor; // ivar: _firstBaselineAnchor
@property (retain, nonatomic) CNUIGeminiDataSource *geminiDataSource; // ivar: _geminiDataSource
@property (retain, nonatomic) CNGeminiResult *geminiResult; // ivar: _geminiResult
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (readonly, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (readonly, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(BOOL)shouldShowGemini;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)geminiDataSourceDidUpdate:(id)arg0 ;
-(void)setupLayoutConstraints;
-(void)setupViews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateViews;
-(void)viewDidLoad;


@end


#endif
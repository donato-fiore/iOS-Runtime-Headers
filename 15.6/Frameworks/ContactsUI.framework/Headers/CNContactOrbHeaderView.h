// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTORBHEADERVIEW_H
#define CNCONTACTORBHEADERVIEW_H

@class UIView, NSString, CNContactFormatter, NSArray, UILabel, NSMutableArray, NSDictionary;


#import "CNContactPhotoView.h"

@interface CNContactOrbHeaderView : UIView

@property (retain, nonatomic) NSString *alternateName; // ivar: _alternateName
@property (nonatomic) BOOL alwaysShowsMonogram; // ivar: _alwaysShowsMonogram
@property (nonatomic) BOOL centersPhotoAndLabels; // ivar: _centersPhotoAndLabels
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (nonatomic) UIEdgeInsets contentMargins; // ivar: _contentMargins
@property (retain, nonatomic) UILabel *fakeTaglineAlignmentLabel; // ivar: _fakeTaglineAlignmentLabel
@property (retain, nonatomic) NSMutableArray *headerConstraints; // ivar: _headerConstraints
@property (retain, nonatomic) UIView *markerView; // ivar: _markerView
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (copy, nonatomic) NSDictionary *nameTextAttributes; // ivar: _nameTextAttributes
@property (readonly, nonatomic) CGFloat photoLabelSpacing;
@property (readonly, nonatomic) CNContactPhotoView *photoView; // ivar: _photoView
@property (retain, nonatomic) UILabel *taglineLabel; // ivar: _taglineLabel
@property (copy, nonatomic) NSDictionary *taglineTextAttributes; // ivar: _taglineTextAttributes


+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeysForContactFormatter:(id)arg0 includingAvatarViewDescriptors:(BOOL)arg1 ;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)_headerStringForContacts:(id)arg0 ;
-(id)_taglineStringForContacts:(id)arg0 ;
-(id)initWithContact:(id)arg0 frame:(struct CGRect )arg1 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)handleNameLabelLongPress:(id)arg0 ;
-(void)menuWillHide:(id)arg0 ;
-(void)reloadData;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)updateFontSizes;
-(void)updateWithContacts:(id)arg0 ;


@end


#endif
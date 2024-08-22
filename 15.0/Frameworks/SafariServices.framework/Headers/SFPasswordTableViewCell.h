// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPASSWORDTABLEVIEWCELL_H
#define SFPASSWORDTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIView, NSString, WBSSavedPassword;
@protocol SFPasswordTableViewCell, SFPasswordTableViewCellDelegate;



@interface SFPasswordTableViewCell : UITableViewCell <SFPasswordTableViewCell>

 {
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPasswordTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIconMonogram;
@property (readonly, nonatomic) BOOL safari_hasOneTimeCodeGenerator;
@property (readonly, nonatomic) WBSSavedPassword *savedPassword; // ivar: _savedPassword
@property (readonly, nonatomic) NSString *searchPattern; // ivar: _searchPattern
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateAccessibilityIdentifiers;
-(void)safari_copyOneTimeCode;
-(void)safari_copyPassword;
-(void)safari_copyUserName;
-(void)setIcon:(id)arg0 ;
-(void)showPlaceholderImageForDomain:(id)arg0 backgroundColor:(id)arg1 ;


@end


#endif
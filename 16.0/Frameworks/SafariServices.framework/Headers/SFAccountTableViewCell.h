// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACCOUNTTABLEVIEWCELL_H
#define SFACCOUNTTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIView, NSString, WBSSavedAccount;
@protocol SFAccountTableViewCell, SFAccountTableViewCellDelegate;



@interface SFAccountTableViewCell : UITableViewCell <SFAccountTableViewCell>

 {
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAccountTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIconMonogram;
@property (readonly, nonatomic) BOOL safari_hasOneTimeCodeGenerator;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
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
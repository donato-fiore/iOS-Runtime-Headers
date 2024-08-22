// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPINFLECTIONSETTINGSVIEWCONTROLLER_H
#define IPINFLECTIONSETTINGSVIEWCONTROLLER_H

@class PSListController, _NSAttributedStringGrammarInflection;
@protocol IPInflectionSettingsViewControllerDelegate;



@interface IPInflectionSettingsViewController : PSListController

@property (weak, nonatomic) NSObject<IPInflectionSettingsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _NSAttributedStringGrammarInflection *inflection; // ivar: _inflection


+(id)pronounDisplayStringForInflection:(id)arg0 ;
-(id)customFieldForSpecifier:(id)arg0 ;
-(id)specifiers;
-(id)thirdPartyCanAccessUserInflection;
-(void)setCustomField:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setThirdPartyCanAccessUserInflection:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif
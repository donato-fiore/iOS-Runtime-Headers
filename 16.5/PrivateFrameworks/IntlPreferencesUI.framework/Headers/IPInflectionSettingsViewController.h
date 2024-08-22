// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPINFLECTIONSETTINGSVIEWCONTROLLER_H
#define IPINFLECTIONSETTINGSVIEWCONTROLLER_H

@class PSListController, _NSAttributedStringGrammarInflection;
@protocol IPInflectionSettingsViewControllerDelegate;



@interface IPInflectionSettingsViewController : PSListController

@property BOOL canShareInflection; // ivar: _canShareInflection
@property (weak, nonatomic) NSObject<IPInflectionSettingsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _NSAttributedStringGrammarInflection *inflection; // ivar: _inflection


-(id)specifiers;
-(id)thirdPartyCanAccessUserInflection;
-(void)setThirdPartyCanAccessUserInflection:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif
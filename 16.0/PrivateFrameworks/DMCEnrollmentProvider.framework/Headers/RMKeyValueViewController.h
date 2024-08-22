// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMKEYVALUEVIEWCONTROLLER_H
#define RMKEYVALUEVIEWCONTROLLER_H

@class PSListController, RMUIKeyValueViewModel;



@interface RMKeyValueViewController : PSListController

@property (retain, nonatomic) RMUIKeyValueViewModel *viewModel; // ivar: _viewModel


-(id)_keyValueDetailValue:(id)arg0 ;
-(id)_specifiersForKeyValues;
-(id)specifiers;
-(void)_processUserInfoDictionary;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
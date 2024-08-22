// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTAPPLICATIONOPTION_H
#define UIPRINTAPPLICATIONOPTION_H

@class UIViewController<UIPrintAppExtensionProtocol>;


#import "UIPrintOption.h"

@interface UIPrintApplicationOption : UIPrintOption

@property (weak, nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController; // ivar: _appPrintExtensionController


-(id)initWithPrintInfo:(id)arg0 appPrintExtensionController:(id)arg1 printPanelViewController:(id)arg2 ;
-(id)printOptionTableViewCell;
-(id)summary;


@end


#endif
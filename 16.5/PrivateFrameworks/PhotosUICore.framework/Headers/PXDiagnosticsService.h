// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDIAGNOSTICSSERVICE_H
#define PXDIAGNOSTICSSERVICE_H

@class NSString, UIViewController, NSArray;

#import <Foundation/Foundation.h>


@interface PXDiagnosticsService : NSObject

@property (readonly, nonatomic) BOOL canPerformAction; // ivar: _canPerformAction
@property (readonly, nonatomic) BOOL canProvideConsoleDescription; // ivar: _canProvideConsoleDescription
@property (readonly, nonatomic) BOOL canProvideContextualViewController;
@property (readonly, nonatomic) BOOL canProvideSettingsViewController; // ivar: _canProvideSettingsViewController
@property (readonly, nonatomic) NSString *consoleDescription; // ivar: _consoleDescription
@property (readonly, nonatomic) UIViewController *contextualViewController;
@property (readonly, copy, nonatomic) NSArray *itemProviders; // ivar: _itemProviders
@property (readonly, nonatomic) UIViewController *settingsViewController; // ivar: _settingsViewController
@property (readonly, nonatomic) NSString *title;


-(id)init;
-(id)initWithItemProviders:(id)arg0 ;
-(void)performAction;


@end


#endif
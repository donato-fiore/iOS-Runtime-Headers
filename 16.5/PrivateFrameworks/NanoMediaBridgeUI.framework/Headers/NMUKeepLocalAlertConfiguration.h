// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMUKEEPLOCALALERTCONFIGURATION_H
#define NMUKEEPLOCALALERTCONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "NMUKeepLocalAlertAction.h"

@interface NMUKeepLocalAlertConfiguration : NSObject

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) NMUKeepLocalAlertAction *cancelAction; // ivar: _cancelAction
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)requiredPropertiesForModelKind:(id)arg0 ;
-(id)_downloadNowOffPowerActionWithOptions:(id)arg0 ;
-(id)_downloadNowOffPowerOnCellularActionWithOptions:(id)arg0 ;
-(id)_okAction;
-(id)_titleForModelObject:(id)arg0 ;
-(id)alertViewControllerWithKeepLocalBlock:(id)arg0 ;


@end


#endif
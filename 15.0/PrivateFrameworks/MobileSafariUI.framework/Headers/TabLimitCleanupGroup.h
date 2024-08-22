// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABLIMITCLEANUPGROUP_H
#define TABLIMITCLEANUPGROUP_H

@class UIAlertAction, NSString;

#import <Foundation/Foundation.h>


@interface TabLimitCleanupGroup : NSObject

@property (readonly, nonatomic) UIAlertAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message


-(id)initWithAlertMesssage:(id)arg0 actionTitle:(id)arg1 tabs:(id)arg2 browserWindowController:(id)arg3 resultHandler:(id)arg4 ;


@end


#endif
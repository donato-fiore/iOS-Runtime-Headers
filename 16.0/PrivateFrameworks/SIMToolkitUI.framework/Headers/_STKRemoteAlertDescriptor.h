// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _STKREMOTEALERTDESCRIPTOR_H
#define _STKREMOTEALERTDESCRIPTOR_H

@class BSAction, NSString;

#import <Foundation/Foundation.h>

#import "STKSessionAction.h"

@interface _STKRemoteAlertDescriptor : NSObject

@property (readonly, nonatomic) BSAction *BSAction; // ivar: _BSAction
@property (readonly, nonatomic) STKSessionAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *viewControllerName; // ivar: _viewControllerName


-(id)debugDescription;
-(id)description;
-(id)initWithAction:(id)arg0 viewControllerName:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBPLUGINACTION_H
#define AMSUIWEBPLUGINACTION_H

@class NSString, NSDictionary;


#import "AMSUIWebAction.h"

@interface AMSUIWebPluginAction : AMSUIWebAction

@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif
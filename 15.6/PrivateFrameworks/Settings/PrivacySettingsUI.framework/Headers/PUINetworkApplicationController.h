// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUINETWORKAPPLICATIONCONTROLLER_H
#define PUINETWORKAPPLICATIONCONTROLLER_H

@class LSApplicationProxy, NSString;


#import "PUINetworkController.h"

@interface PUINetworkApplicationController : PUINetworkController

@property (retain) LSApplicationProxy *application; // ivar: _application
@property (retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(id)isLocalNetworkEnabled:(id)arg0 ;
-(id)pathRuleCreate:(BOOL)arg0 ;
-(id)specifiers;
-(void)setLocalNetworkEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSpecifier:(id)arg0 ;


@end


#endif
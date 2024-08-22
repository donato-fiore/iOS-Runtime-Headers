// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERSERVICE_H
#define SBAPPSWITCHERSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBAppSwitcherService : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *viewServiceClassName; // ivar: _viewServiceClassName


+(id)switcherServiceWithName:(id)arg0 viewServiceClassName:(id)arg1 ;


@end


#endif
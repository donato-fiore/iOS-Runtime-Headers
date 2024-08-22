// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLOCKEDPLUGIN_H
#define BLOCKEDPLUGIN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlockedPlugin : NSObject

@property (readonly) NSString *bundleName; // ivar: _bundleName
@property (readonly) NSString *plugName; // ivar: _plugName
@property (readonly) NSString *plugVersion; // ivar: _plugVersion


-(id)init:(id)arg0 plugName:(id)arg1 plugVersion:(id)arg2 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLSYSTEMAPPLICATION_H
#define TLSYSTEMAPPLICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TLSystemApplication : NSObject

@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSString *name; // ivar: _name


+(id)defaultSystemApplication;
-(id)initWithBundleIdentifier:(id)arg0 name:(id)arg1 ;


@end


#endif
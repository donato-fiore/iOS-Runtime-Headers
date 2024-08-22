// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLPRFAPP_H
#define CSLPRFAPP_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface CSLPRFApp : NSObject

@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *sdkVersion; // ivar: _sdkVersion
@property (nonatomic) BOOL supportsAlwaysOnDisplay; // ivar: _supportsAlwaysOnDisplay


+(id)appWithBundleID:(id)arg0 name:(id)arg1 icon:(id)arg2 sdkVersion:(id)arg3 supportsAlwaysOnDisplay:(BOOL)arg4 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 name:(id)arg1 icon:(id)arg2 sdkVersion:(id)arg3 supportsAlwaysOnDisplay:(BOOL)arg4 ;


@end


#endif
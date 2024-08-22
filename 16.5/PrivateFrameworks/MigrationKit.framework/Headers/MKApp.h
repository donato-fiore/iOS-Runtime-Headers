// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKAPP_H
#define MKAPP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKApp : NSObject

@property (copy, nonatomic) NSString *appStoreIdentifier; // ivar: _appStoreIdentifier
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSString *developer; // ivar: _developer
@property (copy, nonatomic) NSString *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *iconURLForAppStore; // ivar: _iconURLForAppStore
@property (copy, nonatomic) NSString *iconURLForiPad; // ivar: _iconURLForiPad
@property (copy, nonatomic) NSString *iconURLForiPadPro; // ivar: _iconURLForiPadPro
@property (copy, nonatomic) NSString *iconURLForiPhone2x; // ivar: _iconURLForiPhone2x
@property (copy, nonatomic) NSString *iconURLForiPhone3x; // ivar: _iconURLForiPhone3x
@property (nonatomic) BOOL isFree; // ivar: _isFree
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithBundleIdentifier:(id)arg0 appStoreIdentifier:(id)arg1 isFree:(BOOL)arg2 ;
-(id)initWithJSONData:(id)arg0 ;


@end


#endif
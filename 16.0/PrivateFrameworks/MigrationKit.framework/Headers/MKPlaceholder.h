// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEHOLDER_H
#define MKPLACEHOLDER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface MKPlaceholder : NSObject

@property (copy, nonatomic) NSString *appStoreIdentifier; // ivar: _appStoreIdentifier
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *container; // ivar: _container
@property (copy, nonatomic) NSString *developer; // ivar: _developer
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSData *icon; // ivar: _icon
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 appStoreIdentifier:(id)arg1 bundleName:(id)arg2 developer:(id)arg3 icon:(id)arg4 ;
-(id)initWithJSONData:(id)arg0 ;
-(id)initWithTestBundleIdentifier;
-(void)install;
-(void)uninstall;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUIINHERITANCEAPPACCESSDETAILS_H
#define CDPUIINHERITANCEAPPACCESSDETAILS_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface CDPUIInheritanceAppAccessDetails : NSObject

@property (copy, nonatomic) NSString *accessString; // ivar: _accessString
@property (readonly, nonatomic) UIImage *appIcon; // ivar: _appIcon
@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID


-(id)initWithBundleID:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 accessString:(id)arg1 ;
-(void)_prepareIcon;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPINSTALLATION_H
#define CKAPPINSTALLATION_H

@class NSString, LSApplicationProxy, UIImage, LSApplicationWorkspace;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKAppInstallation : NSObject <NSCopying>

 {
    NSString *_bundleIdentifier;
    LSApplicationProxy *_proxy;
    UIImage *_icon;
}


@property (readonly, nonatomic) LSApplicationWorkspace *_applicationWorkspace; // ivar: __applicationWorkspace
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) UIImage *icon;
@property (nonatomic) NSUInteger installState; // ivar: _installState
@property (readonly, nonatomic) BOOL installed;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) CGFloat percentComplete; // ivar: _percentComplete
@property (readonly, nonatomic) NSString *pluginBundleIdentifier;
@property (retain, nonatomic) LSApplicationProxy *proxy;
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 startTime:(CGFloat)arg1 ;


@end


#endif
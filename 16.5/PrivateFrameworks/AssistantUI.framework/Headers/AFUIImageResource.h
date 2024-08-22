// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUIIMAGERESOURCE_H
#define AFUIIMAGERESOURCE_H

@class NSString, SAUIAppPunchOut, NSBundle, NSURL;

#import <Foundation/Foundation.h>


@interface AFUIImageResource : NSObject

@property (copy, nonatomic) NSString *localPressedResourceName; // ivar: _localPressedResourceName
@property (retain, nonatomic) SAUIAppPunchOut *localPunchOut; // ivar: _localPunchOut
@property (retain, nonatomic) NSBundle *localResourceBundle; // ivar: _localResourceBundle
@property (copy, nonatomic) NSString *localResourceName; // ivar: _localResourceName
@property (nonatomic) CGSize logoSize; // ivar: _logoSize
@property (nonatomic) CGFloat remotePressedScale; // ivar: _remotePressedScale
@property (copy, nonatomic) NSURL *remotePressedURL; // ivar: _remotePressedURL
@property (retain, nonatomic) SAUIAppPunchOut *remotePunchOut; // ivar: _remotePunchOut
@property (nonatomic) CGFloat remoteScale; // ivar: _remoteScale
@property (copy, nonatomic) NSURL *remoteURL; // ivar: _remoteURL


+(id)imageResourceFromKey:(id)arg0 pressedKey:(id)arg1 punchOut:(id)arg2 ;
+(id)imageResourceWithAppPunchOut:(id)arg0 ;
+(id)imageResourceWithLocalResourceName:(id)arg0 pressedResourceName:(id)arg1 localPunchOut:(id)arg2 bundle:(id)arg3 ;
-(id)_imageInLocalResourceBundleNamed:(id)arg0 ;
-(void)_fetchLocalResourcesWithCompletion:(id)arg0 ;
-(void)_fetchRemoteResourcesWithCompletion:(id)arg0 ;
-(void)getLogoWithCompletion:(id)arg0 ;


@end


#endif
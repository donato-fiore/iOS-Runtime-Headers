// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSWEBCLIP_H
#define CPSWEBCLIP_H

@class NSDictionary, NSString, NSUserActivity, NSURL, NSDate;

#import <Foundation/Foundation.h>


@interface CPSWebClip : NSObject {
    *CGImage _iconImage;
}


@property (readonly, nonatomic) NSDictionary *_dictionaryRepresentation;
@property (copy, nonatomic) NSString *_temporaryIconPath; // ivar: _temporaryIconPath
@property (readonly, nonatomic) NSUserActivity *appClipUserActivity;
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, nonatomic, getter=isApplicationInstalled) BOOL applicationInstalled;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSUInteger bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *fullAppCaption; // ivar: _fullAppCaption
@property (copy, nonatomic) NSString *fullAppName; // ivar: _fullAppName
@property (copy, nonatomic) NSURL *fullAppStoreURL; // ivar: _fullAppStoreURL
@property (readonly, nonatomic) *CGImage iconImage;
@property (readonly, nonatomic) NSString *iconImagePath;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *lastActivatedTime; // ivar: _lastActivatedTime
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (nonatomic, getter=isPoweredBy) BOOL poweredBy; // ivar: _poweredBy
@property (copy, nonatomic) NSURL *registeredURL; // ivar: _registeredURL
@property (nonatomic) BOOL scenelessBackgroundLaunch; // ivar: _scenelessBackgroundLaunch
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger webClipType; // ivar: _webClipType


+(id)appClips;
-(id)_bundleResourceWithName:(id)arg0 ;
-(id)_init;
-(id)_initWithIdentifier:(id)arg0 webClipDictionary:(id)arg1 ;
-(id)description;
-(void)_updateWithClipMetadata:(id)arg0 ;


@end


#endif
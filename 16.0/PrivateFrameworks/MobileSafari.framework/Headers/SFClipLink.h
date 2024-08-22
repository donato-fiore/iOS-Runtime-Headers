// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCLIPLINK_H
#define SFCLIPLINK_H

@class NSString, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface SFClipLink : NSObject

@property (copy, nonatomic) NSString *actionCaption; // ivar: _actionCaption
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *clipName; // ivar: _clipName
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL siteRequestsShowCard; // ivar: _siteRequestsShowCard
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(id)localizedCaptionForClipNamed:(id)arg0 action:(NSInteger)arg1 ;
+(id)localizedUppercaseStringForAction:(NSInteger)arg0 ;
-(id)initWithURL:(id)arg0 bundleIdentifier:(id)arg1 actionTitle:(id)arg2 ;
-(void)getClipAttributesWithCompletionHandler:(id)arg0 ;


@end


#endif
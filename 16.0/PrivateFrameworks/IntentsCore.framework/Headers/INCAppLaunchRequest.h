// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCAPPLAUNCHREQUEST_H
#define INCAPPLAUNCHREQUEST_H

@class NSURL, NSString, NSDictionary, NSUserActivity;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface INCAppLaunchRequest : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic, getter=isSupportedInCarPlay) BOOL supportedInCarPlay;
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URLOverrideForURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAudioCallIntentForCarousel:(id)arg0 error:(*id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 options:(id)arg1 URL:(id)arg2 userActivity:(id)arg3 ;
-(id)initWithIntent:(id)arg0 userActivity:(id)arg1 inBackground:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithInteraction:(id)arg0 userActivity:(id)arg1 inBackground:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(void)observeForAppLaunchWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)performWithCompletionHandler:(id)arg0 ;
-(void)performWithService:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
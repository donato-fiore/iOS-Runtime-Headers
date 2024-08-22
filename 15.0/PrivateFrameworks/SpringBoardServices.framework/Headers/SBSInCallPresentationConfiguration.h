// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSINCALLPRESENTATIONCONFIGURATION_H
#define SBSINCALLPRESENTATIONCONFIGURATION_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSInCallPresentationConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) CGFloat preferredBannerHeight; // ivar: _preferredBannerHeight
@property (nonatomic) NSInteger preferredPresentationMode; // ivar: _preferredPresentationMode
@property (readonly, copy, nonatomic) NSString *sceneBundleIdentifier; // ivar: _sceneBundleIdentifier
@property (nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation; // ivar: _screenSharingPresentation
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSceneBundleIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
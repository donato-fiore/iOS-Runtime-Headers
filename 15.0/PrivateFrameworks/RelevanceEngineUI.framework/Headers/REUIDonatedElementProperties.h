// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUIDONATEDELEMENTPROPERTIES_H
#define REUIDONATEDELEMENTPROPERTIES_H

@class UIImage, NSString, INIntent, INInteraction, INRelevantShortcut, NSUserActivity;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REUIDonatedElementProperties : NSObject <NSSecureCoding, NSCopying>

 {
    UIImage *_bodyImage;
    BOOL _isUsingPlaceholderArtwork;
}


@property (readonly, nonatomic) NSUInteger actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) UIImage *appIcon; // ivar: _appIcon
@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) UIImage *bodyImage;
@property (readonly, nonatomic) NSString *bodyImageCompositingFilter;
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL displayAppName; // ivar: _displayAppName
@property (readonly, nonatomic) NSUInteger donationType; // ivar: _donationType
@property (readonly, nonatomic) UIImage *fullsizeAppIcon; // ivar: _fullsizeAppIcon
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (readonly, nonatomic) BOOL isBeginWorkoutDonation;
@property (readonly, nonatomic) BOOL isEndWorkoutDonation;
@property (readonly, nonatomic) BOOL isMediaDonation;
@property (readonly, nonatomic) BOOL isRunWorkflowDonation;
@property (readonly, nonatomic) BOOL isWorkoutDonation;
@property (readonly, nonatomic) NSString *localBundleIdentifier; // ivar: _localBundleIdentifier
@property (readonly, nonatomic, getter=isLocalDonation) BOOL localDonation; // ivar: _localDonation
@property (readonly, nonatomic) UIImage *monochromeBodyImage; // ivar: _monochromeBodyImage
@property (readonly, nonatomic) INRelevantShortcut *relevantShortcut; // ivar: _relevantShortcut
@property (readonly, nonatomic) NSString *remoteBundleIdentifier; // ivar: _remoteBundleIdentifier
@property (readonly, nonatomic) BOOL requiresRemoteExecution;
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) BOOL supportsBackgroundExecution;
@property (readonly, nonatomic) BOOL supportsLocalIntentExecution;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


+(BOOL)supportsSecureCoding;
+(void)createWithDonatedAction:(id)arg0 completion:(id)arg1 ;
-(BOOL)_hasLocalExtensionForIntentExecution;
-(BOOL)_isMusicDonation;
-(BOOL)_isPodcastsDonation;
-(id)_placeholderImageNameForBundleID:(id)arg0 ;
-(id)_scaleImageForDisplay:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_loadAppContentPropertiesWithCompletion:(id)arg0 ;
-(void)_loadContentForIntent:(id)arg0 completion:(id)arg1 ;
-(void)_loadContentForRelevantShortcut:(id)arg0 completion:(id)arg1 ;
-(void)_loadContentForUserActivity:(id)arg0 completion:(id)arg1 ;
-(void)_loadContentForUserActivityOnShortcut:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadForAction:(id)arg0 completion:(id)arg1 ;


@end


#endif
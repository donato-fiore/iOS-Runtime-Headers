// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIAPPPUNCHOUT_H
#define SAUIAPPPUNCHOUT_H

@class NSString, NSDictionary, NSURL, NSArray;


#import "SABaseClientBoundCommand.h"
#import "SAUIAddViews.h"
#import "SAUIImageResource.h"

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAddViews *alternativePunchOut;
@property (nonatomic) BOOL appAvailableInStorefront;
@property (copy, nonatomic) NSString *appDisplayName;
@property (retain, nonatomic) SAUIImageResource *appIcon;
@property (copy, nonatomic) NSDictionary *appIconMap;
@property (nonatomic) BOOL appInstalled;
@property (copy, nonatomic) NSURL *appStoreUri;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSArray *launchOptions;
@property (nonatomic) BOOL launchOverSiri;
@property (copy, nonatomic) NSString *predefinedButtonType;
@property (copy, nonatomic) NSString *providerId;
@property (copy, nonatomic) NSString *punchOutName;
@property (copy, nonatomic) NSURL *punchOutUri;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *themeIcons;


+(id)appPunchOut;
+(id)appPunchOutWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
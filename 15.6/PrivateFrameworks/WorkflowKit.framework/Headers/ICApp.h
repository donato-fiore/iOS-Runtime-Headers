// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICAPP_H
#define ICAPP_H

@class NSArray, INAppInfo, NSString, NSDictionary, WFImage;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICApp : NSObject

@property (readonly, nonatomic) NSArray *allBundleIdentifiers;
@property (readonly, nonatomic) INAppInfo *appInfo; // ivar: _appInfo
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL checkedInstallStatus; // ivar: _checkedInstallStatus
@property (readonly, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) NSArray *documentActions;
@property (readonly, nonatomic) NSArray *documentTypes;
@property (readonly, nonatomic) NSArray *exportedFileTypes;
@property (readonly, nonatomic) NSString *iTunesIdentifier;
@property (retain, nonatomic) WFImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isInstalled) BOOL installed; // ivar: _installed
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *localizedShortName;
@property (readonly, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic) NSArray *schemes; // ivar: _schemes
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // ivar: _stateAccessQueue


+(void)loadIconWithBundleIdentifier:(id)arg0 desiredSize:(struct CGSize )arg1 completionHandler:(id)arg2 ;
-(BOOL)determinesInstallStatusViaURLScheme;
-(BOOL)isCurrentlyInstalled;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)identifierFromDictionaryForCurrentIdiom:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 ;
-(id)localizedString:(id)arg0 identifier:(id)arg1 ;
-(id)schemeNamed:(id)arg0 ;
-(void)loadAppInStoreController:(id)arg0 withCampaignToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)openFile:(id)arg0 completionHandler:(id)arg1 ;
-(void)openFile:(id)arg0 withAnnotation:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateInstalledStatus;


@end


#endif
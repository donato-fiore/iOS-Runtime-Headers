// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIAPPINSTALLCONTROLLER_H
#define PSUIAPPINSTALLCONTROLLER_H

@class NSURLSession, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "PSUIAppDescription.h"

@interface PSUIAppInstallController : NSObject {
    NSURLSession *_session;
}


@property (retain) PSUIAppDescription *appDescription; // ivar: _appDescription
@property (readonly, nonatomic) NSString *appID; // ivar: _appID
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly) int installState; // ivar: _installState
@property (retain) NSURL *installURL; // ivar: _installURL
@property (retain, nonatomic) NSURL *moreAppsURL; // ivar: _moreAppsURL


+(id)iconLocalCacheURLFromKey:(id)arg0 ;
+(id)loadIconFromURL:(id)arg0 session:(id)arg1 ;
+(id)lookupAppDescriptionForInstalledApp:(id)arg0 ;
+(id)tryLoadAppDescriptionFromCache;
+(void)lookupAppFromStore:(id)arg0 completionHandler:(id)arg1 ;
+(void)saveAppDescriptionToCache:(id)arg0 ;
-(BOOL)moreAppsAvailable;
-(id)initWithAppID:(id)arg0 carrierMoreAppsURL:(id)arg1 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)specifier;
-(void)installButtonTapped:(id)arg0 ;
-(void)load;
-(void)moreAppsButtonTapped:(id)arg0 ;


@end


#endif
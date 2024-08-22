// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBDEFAULTAPPLICATIONPROVIDER_H
#define XBDEFAULTAPPLICATIONPROVIDER_H

@class NSString;
@protocol XBApplicationProviding;

#import <Foundation/Foundation.h>


@interface XBDefaultApplicationProvider : NSObject <XBApplicationProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_allApplicationsFilteredBySystem:(BOOL)arg0 bySplashBoard:(BOOL)arg1 ;
-(id)allInstalledApplications;
-(id)allSplashBoardApplications;
-(id)recentlyUsedBundleIDs;
-(id)splashBoardSystemApplications;


@end


#endif
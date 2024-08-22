// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUINSTALLEDAPPPROVIDERDEVICE_H
#define SSUINSTALLEDAPPPROVIDERDEVICE_H

@class NSString;
@protocol SSUInstalledAppProvider;

#import <Foundation/Foundation.h>


@interface SSUInstalledAppProviderDevice : NSObject <SSUInstalledAppProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly) Class superclass;


-(id)applicationInfoFromAppRecord:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)lookupAllSSUEnabledApps;
-(id)lookupSSUAssetDirectoryFromAppRecord:(id)arg0 ;
-(id)lookupSSUEnabledAppByBundleId:(id)arg0 ;


@end


#endif
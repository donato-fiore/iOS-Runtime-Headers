// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLPRFDEFAULTAPPDATAPROVIDER_H
#define CSLPRFDEFAULTAPPDATAPROVIDER_H

@class NSString;
@protocol CSLPRFAppDataProviderDelegate, CSLPRFAppDataProvider;

#import <Foundation/Foundation.h>

#import "CSLPRFNanoAppRegistryAppDataProvider.h"

@interface CSLPRFDefaultAppDataProvider : NSObject <CSLPRFAppDataProviderDelegate, CSLPRFAppDataProvider>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSLPRFAppDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStandAloneStoreCompatible; // ivar: _isStandAloneStoreCompatible
@property (readonly, nonatomic) CSLPRFNanoAppRegistryAppDataProvider *nanoAppRegistryDataProvider; // ivar: _nanoAppRegistryDataProvider
@property (readonly) Class superclass;


-(id)displayNameForWatchApp:(id)arg0 ;
-(id)init;
// -(void)_appConduitLoadApps:(id)arg0 withCompletion:(id)arg1 completionQueue:(unk)arg2  ;
-(void)_appsDidChange;
-(void)dataProviderDidChange:(id)arg0 ;
-(void)dealloc;
-(void)enumerateInstalledApplicationsOnPairedDeviceWithBlock:(id)arg0 ;
-(void)loadAppsWithCompletion:(id)arg0 ;
// -(void)loadAppsWithCompletion:(id)arg0 completionQueue:(unk)arg1  ;


@end


#endif
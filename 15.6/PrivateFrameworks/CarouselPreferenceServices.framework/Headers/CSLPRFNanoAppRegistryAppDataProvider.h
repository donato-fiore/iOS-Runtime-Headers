// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLPRFNANOAPPREGISTRYAPPDATAPROVIDER_H
#define CSLPRFNANOAPPREGISTRYAPPDATAPROVIDER_H

@class NARApplicationWorkspace, NSString;
@protocol CSLPRFAppDataProvider, CSLPRFAppDataProviderDelegate;

#import <Foundation/Foundation.h>


@interface CSLPRFNanoAppRegistryAppDataProvider : NSObject <CSLPRFAppDataProvider>

 {
    NARApplicationWorkspace *_workspace;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSLPRFAppDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_appIsFirstParty:(id)arg0 ;
-(BOOL)_isAppEligibleForInclusion:(id)arg0 ;
-(id)_localizedNameForWatchBundleID:(id)arg0 ;
-(id)_nameForWatchBundleID:(id)arg0 ;
-(id)init;
-(void)_appsDidChange;
-(void)dealloc;
-(void)loadAppsWithCompletion:(id)arg0 ;
// -(void)loadAppsWithCompletion:(id)arg0 completionQueue:(unk)arg1  ;


@end


#endif
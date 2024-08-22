// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDMAILDYNAMICDATAASSET_H
#define EDMAILDYNAMICDATAASSET_H

@class NSString, NSSet;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EDAssetDownloadScheduler.h"

@interface EDMailDynamicDataAsset : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSSet *ignoredDomains; // ivar: _ignoredDomains
@property (retain, nonatomic) EDAssetDownloadScheduler *scheduler; // ivar: _scheduler
@property BOOL shouldIgnoreUserAccountDomains; // ivar: _shouldIgnoreUserAccountDomains
@property (readonly) Class superclass;


+(id)log;
-(BOOL)shouldIgnoreDomain:(id)arg0 ;
-(id)init;
-(void)_downloadAssetCatalogWithCompletion:(id)arg0 ;
-(void)_queryForAssetWithCompletion:(id)arg0 ;
-(void)_updateIgnoredDomains:(id)arg0 ;
-(void)_updateStateFromAsset:(id)arg0 ;


@end


#endif
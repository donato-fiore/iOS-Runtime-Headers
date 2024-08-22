// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDATASOURCECATALOG_H
#define REDATASOURCECATALOG_H

@class NSCache, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REDataSourceManager.h"
#import "REAppIconCache.h"
#import "REAppNameCache.h"

@interface REDataSourceCatalog : NSObject {
    REDataSourceManager *_dataSourceManager;
    NSCache *_iconCache;
    NSMutableDictionary *_localizedNameCache;
    NSObject<OS_dispatch_queue> *_queue;
    REAppIconCache *_appIconCache;
    REAppNameCache *_appNameCache;
}


@property (readonly, nonatomic) NSSet *dataSourceIdentifiers;
@property (readonly, nonatomic) NSSet *unrestrictedDataSourceIdentifiers;


-(BOOL)imageForDataSourceWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(BOOL)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg0 ;
-(BOOL)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg0 ;
-(id)applicationIdentifierForDataSourceWithIdentifier:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg0 ;
-(id)localizedNameForApplicationWithIdentifier:(id)arg0 ;
-(id)localizedNameForDataSourceWithIdentifier:(id)arg0 ;
-(struct ? )minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg0 ;
-(void)_applicationsStatesDidChange;
-(void)dealloc;
-(void)donatedAppIdentifiersWithCompletion:(id)arg0 ;
-(void)enumerateDataSources:(id)arg0 ;
-(void)imageForApplicationWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif
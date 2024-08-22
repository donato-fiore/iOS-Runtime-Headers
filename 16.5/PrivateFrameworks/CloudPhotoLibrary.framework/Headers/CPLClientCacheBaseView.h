// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLCLIENTCACHEBASEVIEW_H
#define CPLCLIENTCACHEBASEVIEW_H

@protocol CPLEngineIDMapping;


#import "CPLRecordStorageView.h"
#import "CPLEngineCloudCache.h"
#import "CPLEngineStore.h"

@interface CPLClientCacheBaseView : CPLRecordStorageView

@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache; // ivar: _cloudCache
@property (readonly, nonatomic) NSObject<CPLEngineIDMapping> *idMapping; // ivar: _idMapping
@property (readonly, nonatomic) CPLEngineStore *store; // ivar: _store


+(id)clientCacheBaseViewIDMappingForStore:(id)arg0 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg0 ;
-(NSUInteger)countOfRecordsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)description;
-(id)initWithStore:(id)arg0 ;
-(id)recordViewWithScopedIdentifier:(id)arg0 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg0 ;


@end


#endif
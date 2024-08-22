// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLCLOUDCACHEBASEVIEW_H
#define CPLCLOUDCACHEBASEVIEW_H



#import "CPLRecordStorageView.h"
#import "CPLEngineCloudCache.h"

@interface CPLCloudCacheBaseView : CPLRecordStorageView

@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache; // ivar: _cloudCache
@property (readonly, nonatomic) BOOL useFinal; // ivar: _useFinal


-(id)initWithCloudCache:(id)arg0 useFinal:(BOOL)arg1 ;
-(id)recordViewWithScopedIdentifier:(id)arg0 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDLOGICALSOURCEENTITY_H
#define HDLOGICALSOURCEENTITY_H



#import "HDHealthEntity.h"

@interface HDLogicalSourceEntity : HDHealthEntity



+(BOOL)deleteLogicalSourceEntitiesIfNecessaryWithTransaction:(id)arg0 error:(*id)arg1 ;
+(NSInteger)protectionClass;
+(id)bundleIDForLogicalSourceID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)logicalSourceIDForBundleIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)lookUpOrCreateLogicalSourceWithBundleIdentifier:(id)arg0 owningAppBundleIdentifier:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)ownerBundleIDForLogicalSourceID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif
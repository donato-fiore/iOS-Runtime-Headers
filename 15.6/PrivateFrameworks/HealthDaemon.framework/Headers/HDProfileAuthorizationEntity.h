// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDPROFILEAUTHORIZATIONENTITY_H
#define HDPROFILEAUTHORIZATIONENTITY_H



#import "HDHealthEntity.h"

@interface HDProfileAuthorizationEntity : HDHealthEntity



+(BOOL)fetchStatus:(*NSInteger)arg0 profile:(id)arg1 bundleIdentifier:(id)arg2 error:(*id)arg3 ;
+(BOOL)setStatus:(NSInteger)arg0 profile:(id)arg1 bundleIdentifier:(id)arg2 dateModified:(id)arg3 error:(*id)arg4 ;
+(BOOL)setStatusIfNeeded:(NSInteger)arg0 profile:(id)arg1 bundleIdentifier:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)anyForBundleIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)unitTest_getBundleIdentifier:(*id)arg0 status:(*NSInteger)arg1 dateModified:(*id)arg2 forProfile:(id)arg3 error:(*id)arg4 ;


@end


#endif
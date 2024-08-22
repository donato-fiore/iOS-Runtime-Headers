// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFSTATICPOSTERDESCRIPTORSTORECOORDINATOR_H
#define PBFSTATICPOSTERDESCRIPTORSTORECOORDINATOR_H



#import "PBFPosterDescriptorStoreCoordinator.h"

@interface PBFStaticPosterDescriptorStoreCoordinator : PBFPosterDescriptorStoreCoordinator



+(BOOL)shouldBeExcludedFromBackup;
+(NSInteger)type;
-(id)_accessQueue_buildIdentityForVersion:(NSUInteger)arg0 supplement:(NSUInteger)arg1 ;


@end


#endif
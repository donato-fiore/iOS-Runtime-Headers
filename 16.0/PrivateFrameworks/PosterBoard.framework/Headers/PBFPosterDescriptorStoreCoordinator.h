// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERDESCRIPTORSTORECOORDINATOR_H
#define PBFPOSTERDESCRIPTORSTORECOORDINATOR_H

@class NSURL, NSString;


#import "PBFPosterModelStoreCoordinator.h"

@interface PBFPosterDescriptorStoreCoordinator : PBFPosterModelStoreCoordinator {
    NSURL *_descriptorIdentifierURL;
    NSString *_descriptorIdentifier;
}


@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;


+(BOOL)shouldBeExcludedFromBackup;
+(NSInteger)type;
-(id)_accessQueue_buildIdentityForVersion:(NSUInteger)arg0 supplement:(NSUInteger)arg1 ;
-(id)checkEnvironmentConsistency;
-(id)initExistingStoreCoordinatorWithExtensionIdentifier:(id)arg0 identifierURL:(id)arg1 posterUUID:(id)arg2 ;
-(id)initWithPath:(id)arg0 ;


@end


#endif
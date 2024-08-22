// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPAPPLEPHOTOSSHAREDLIBRARYINVITATIONMETADATAPROVIDERSPECIALIZATION_H
#define LPAPPLEPHOTOSSHAREDLIBRARYINVITATIONMETADATAPROVIDERSPECIALIZATION_H



#import "LPMetadataProviderSpecialization.h"

@interface LPApplePhotosSharedLibraryInvitationMetadataProviderSpecialization : LPMetadataProviderSpecialization



+(NSUInteger)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(void)completeWithOriginatorDisplayName:(id)arg0 ;
-(void)start;


@end


#endif
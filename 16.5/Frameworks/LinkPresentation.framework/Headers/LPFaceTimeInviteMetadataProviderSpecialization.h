// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPFACETIMEINVITEMETADATAPROVIDERSPECIALIZATION_H
#define LPFACETIMEINVITEMETADATAPROVIDERSPECIALIZATION_H



#import "LPMetadataProviderSpecialization.h"

@interface LPFaceTimeInviteMetadataProviderSpecialization : LPMetadataProviderSpecialization



+(NSUInteger)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(void)completeWithMetadata:(id)arg0 ;
-(void)start;


@end


#endif
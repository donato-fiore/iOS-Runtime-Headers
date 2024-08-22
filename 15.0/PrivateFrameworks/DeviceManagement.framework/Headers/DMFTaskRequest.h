// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFTASKREQUEST_H
#define DMFTASKREQUEST_H

@class CATTaskRequest;



@interface DMFTaskRequest : CATTaskRequest



+(BOOL)isPermittedOnCurrentPlatform;
+(BOOL)isPermittedOnPlatform:(NSUInteger)arg0 ;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;


@end


#endif
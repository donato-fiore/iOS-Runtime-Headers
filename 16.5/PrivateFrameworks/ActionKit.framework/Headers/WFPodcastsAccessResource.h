// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPODCASTSACCESSRESOURCE_H
#define WFPODCASTSACCESSRESOURCE_H

@class WFAccessResource;



@interface WFPodcastsAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;


@end


#endif
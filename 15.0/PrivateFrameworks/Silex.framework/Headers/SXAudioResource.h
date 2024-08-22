// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAUDIORESOURCE_H
#define SXAUDIORESOURCE_H

@class NSURL, NSString;
@protocol SXAudioResource;


#import "SXResource.h"

@interface SXAudioResource : SXResource <SXAudioResource>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;




@end


#endif
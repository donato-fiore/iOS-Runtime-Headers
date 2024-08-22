// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIDEORESOURCE_H
#define SXVIDEORESOURCE_H

@class NSURL, NSString;
@protocol SXVideoResource;


#import "SXResource.h"

@interface SXVideoResource : SXResource <SXVideoResource>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;




@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXQUICKLOOKRESOURCE_H
#define SXQUICKLOOKRESOURCE_H

@class NSURL, NSString;
@protocol SXQuickLookResource;


#import "SXResource.h"

@interface SXQuickLookResource : SXResource <SXQuickLookResource>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;




@end


#endif
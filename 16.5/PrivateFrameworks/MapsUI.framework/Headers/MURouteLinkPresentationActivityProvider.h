// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUROUTELINKPRESENTATIONACTIVITYPROVIDER_H
#define MUROUTELINKPRESENTATIONACTIVITYPROVIDER_H

@class GEOComposedRoute, LPLinkMetadata, NSString;
@protocol UIActivityItemLinkPresentationSource;


#import "MURouteActivityProvider.h"

@interface MURouteLinkPresentationActivityProvider : MURouteActivityProvider <UIActivityItemLinkPresentationSource>

 {
    GEOComposedRoute *_composedRoute;
    LPLinkMetadata *_cachedMetadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithSource:(id)arg0 destination:(id)arg1 composedRoute:(id)arg2 ;
-(id)mapMetadataSpecialization;


@end


#endif
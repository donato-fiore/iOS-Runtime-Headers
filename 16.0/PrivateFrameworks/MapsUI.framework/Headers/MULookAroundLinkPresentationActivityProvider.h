// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MULOOKAROUNDLINKPRESENTATIONACTIVITYPROVIDER_H
#define MULOOKAROUNDLINKPRESENTATIONACTIVITYPROVIDER_H

@class LPLinkMetadata, NSString;
@protocol UIActivityItemLinkPresentationSource;


#import "MUPlaceActivityProvider.h"

@interface MULookAroundLinkPresentationActivityProvider : MUPlaceActivityProvider <UIActivityItemLinkPresentationSource>

 {
    LPLinkMetadata *_cachedMetadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)mapMetadataSpecialization;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACELINKPRESENTATIONACTIVITYPROVIDER_H
#define MKPLACELINKPRESENTATIONACTIVITYPROVIDER_H

@class LPLinkMetadata, NSString;
@protocol UIActivityItemLinkPresentationSource;


#import "MKPlaceActivityProvider.h"

@interface MKPlaceLinkPresentationActivityProvider : MKPlaceActivityProvider <UIActivityItemLinkPresentationSource>

 {
    LPLinkMetadata *_cachedMetadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;


@end


#endif
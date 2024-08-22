// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLINKPRESENTATIONACTIVITYITEMPROVIDER_H
#define PXLINKPRESENTATIONACTIVITYITEMPROVIDER_H

@class NSString;
@protocol UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>

#import "PXLinkPresentationConfiguration.h"

@interface PXLinkPresentationActivityItemProvider : NSObject <UIActivityItemLinkPresentationSource>



@property (readonly, nonatomic) PXLinkPresentationConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_linkMetadataForConfiguration:(id)arg0 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif
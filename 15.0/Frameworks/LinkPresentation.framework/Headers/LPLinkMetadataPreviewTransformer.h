// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPLINKMETADATAPREVIEWTRANSFORMER_H
#define LPLINKMETADATAPREVIEWTRANSFORMER_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "LPLinkMetadata.h"
#import "LPImage.h"

@interface LPLinkMetadataPreviewTransformer : NSObject

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (readonly, retain, nonatomic) LPImage *previewImage;
@property (readonly, copy, nonatomic) NSString *previewSummary;


-(id)initWithMetadata:(id)arg0 URL:(id)arg1 ;


@end


#endif
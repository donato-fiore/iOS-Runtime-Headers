// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINMUTABLEVENDORMETADATAPRODUCT_H
#define CHIPPLUGINMUTABLEVENDORMETADATAPRODUCT_H

@class NSNumber, NSURL, NSString;


#import "CHIPPluginVendorMetadataProduct.h"

@interface CHIPPluginMutableVendorMetadataProduct : CHIPPluginVendorMetadataProduct

@property (copy) NSNumber *categoryNumber;
@property (copy) NSNumber *identifier;
@property (copy) NSURL *installationGuideURL;
@property (copy) NSString *model;
@property (copy) NSString *name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
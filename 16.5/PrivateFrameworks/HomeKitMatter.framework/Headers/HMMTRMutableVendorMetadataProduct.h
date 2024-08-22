// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRMUTABLEVENDORMETADATAPRODUCT_H
#define HMMTRMUTABLEVENDORMETADATAPRODUCT_H

@class NSNumber, NSURL, NSString;


#import "HMMTRVendorMetadataProduct.h"

@interface HMMTRMutableVendorMetadataProduct : HMMTRVendorMetadataProduct

@property (copy) NSNumber *categoryNumber;
@property (copy) NSNumber *identifier;
@property (copy) NSURL *installationGuideURL;
@property (copy) NSString *model;
@property (copy) NSString *name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
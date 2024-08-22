// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDATTRIBUTECODINGDESCRIPTION_H
#define HMDATTRIBUTECODINGDESCRIPTION_H

@class NSAttributeDescription;


#import "HMDPropertyCodingDescription.h"
#import "HMDValueTransformer.h"

@interface HMDAttributeCodingDescription : HMDPropertyCodingDescription {
    BOOL _shouldInline;
    HMDValueTransformer *_transformer;
}


@property (readonly) NSAttributeDescription *attribute;
@property (readonly) BOOL shouldInline;
@property (readonly) HMDValueTransformer *transformer;




@end


#endif
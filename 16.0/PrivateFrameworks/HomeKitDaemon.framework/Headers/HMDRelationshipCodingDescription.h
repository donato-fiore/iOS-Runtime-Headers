// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRELATIONSHIPCODINGDESCRIPTION_H
#define HMDRELATIONSHIPCODINGDESCRIPTION_H

@class NSRelationshipDescription;


#import "HMDPropertyCodingDescription.h"

@interface HMDRelationshipCodingDescription : HMDPropertyCodingDescription {
    BOOL _parentChild;
}


@property (readonly, getter=isParentChild) BOOL parentChild;
@property (readonly, getter=isReference) BOOL reference;
@property (readonly) NSRelationshipDescription *relationship;




@end


#endif
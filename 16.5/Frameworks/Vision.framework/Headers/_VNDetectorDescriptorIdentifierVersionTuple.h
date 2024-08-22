// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _VNDETECTORDESCRIPTORIDENTIFIERVERSIONTUPLE_H
#define _VNDETECTORDESCRIPTORIDENTIFIERVERSIONTUPLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VNResourceVersion.h"

@interface _VNDetectorDescriptorIdentifierVersionTuple : NSObject {
    NSString *_descriptorIdentifier;
    Class _detectorClass;
    VNResourceVersion *_descriptorVersion;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif
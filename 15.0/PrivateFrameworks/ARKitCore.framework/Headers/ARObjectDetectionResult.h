// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AROBJECTDETECTIONRESULT_H
#define AROBJECTDETECTIONRESULT_H


#import <Foundation/Foundation.h>

#import "ARReferenceObject.h"

@interface ARObjectDetectionResult : NSObject

@property (retain, nonatomic) ARReferenceObject *referenceObject; // ivar: _referenceObject
@property (nonatomic) ? visionTransform; // ivar: _visionTransform


-(BOOL)isEqual:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECOGNIZEDHANDPOINTSSPECIFIER_H
#define VNRECOGNIZEDHANDPOINTSSPECIFIER_H

@class NSArray;


#import "VNRecognizedPointsSpecifier.h"

@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedHandKeypoints;
    NSInteger _chirality;
}


@property (readonly) NSInteger chirality;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableGroupKeys;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVCPHandObservation:(id)arg0 originatingRequestSpecifier:(id)arg1 ;
-(id)pointKeyGroupLabelsMapping;
-(id)populatedMLMultiArrayAndReturnError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
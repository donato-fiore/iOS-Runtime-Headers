// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRECOGNIZEDBODYPOINTSSPECIFIER_H
#define VNRECOGNIZEDBODYPOINTSSPECIFIER_H

@class NSArray;


#import "VNRecognizedPointsSpecifier.h"

@interface VNRecognizedBodyPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedPersonKeypoints;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableGroupKeys;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVCPPersonObservation:(id)arg0 originatingRequestSpecifier:(id)arg1 ;
-(id)pointKeyGroupLabelsMapping;
-(id)populatedMLMultiArrayAndReturnError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
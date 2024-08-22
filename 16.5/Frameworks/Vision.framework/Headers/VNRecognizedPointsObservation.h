// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRECOGNIZEDPOINTSOBSERVATION_H
#define VNRECOGNIZEDPOINTSOBSERVATION_H

@class NSArray, NSNumber;


#import "VNObservation.h"
#import "VNRecognizedPointsSpecifier.h"

@interface VNRecognizedPointsObservation : VNObservation {
    VNRecognizedPointsSpecifier *_specifier;
}


@property (readonly, copy) NSArray *availableGroupKeys;
@property (readonly, copy) NSArray *availableKeys;
@property (readonly) NSNumber *groupIdentifier;
@property (readonly) VNRecognizedPointsSpecifier *recognizedPointsSpecifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugQuickLookObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 keypointReturningObservation:(id)arg1 ;
-(id)keypointsMultiArrayAndReturnError:(*id)arg0 ;
-(id)recognizedPointForKey:(id)arg0 error:(*id)arg1 ;
-(id)recognizedPointsForGroupKey:(id)arg0 error:(*id)arg1 ;
-(id)vn_cloneObject;
-(void)addAllJointsToPath:(struct CGPath *)arg0 imageSize:(struct CGSize )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCLASSIFICATIONOBSERVATION_H
#define VNCLASSIFICATIONOBSERVATION_H

@class NSString;
@protocol VNOperationPointsProviding;


#import "VNObservation.h"

@interface VNClassificationObservation : VNObservation {
    id<VNOperationPointsProviding> *_operationPointsProvider;
}


@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)hasMinimumPrecision:(float)arg0 forRecall:(float)arg1 ;
-(BOOL)hasMinimumRecall:(float)arg0 forPrecision:(float)arg1 ;
-(BOOL)hasPrecisionRecallCurve;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 identifier:(id)arg1 confidence:(float)arg2 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 identifier:(id)arg1 confidence:(float)arg2 operationPointsProvider:(id)arg3 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 identifier:(id)arg1 confidence:(float)arg2 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 identifier:(id)arg1 confidence:(float)arg2 operationPointsProvider:(id)arg3 ;
-(id)operationPointsAndReturnError:(*id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
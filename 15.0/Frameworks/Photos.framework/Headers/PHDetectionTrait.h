// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHDETECTIONTRAIT_H
#define PHDETECTIONTRAIT_H


#import <Foundation/Foundation.h>


@interface PHDetectionTrait : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) short type; // ivar: _type
@property (readonly, nonatomic) short value; // ivar: _value


+(id)detectionTraitsByFaceLocalIdentifierForFaces:(id)arg0 ;
+(id)detectionTraitsByFaceLocalIdentifierForFaces:(id)arg0 withDetectionTraitTypes:(id)arg1 ;
+(id)detectionTraitsForDetection:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)initWithType:(short)arg0 value:(short)arg1 score:(CGFloat)arg2 startTime:(CGFloat)arg3 duration:(CGFloat)arg4 ;
-(id)propertyListRepresentation;


@end


#endif
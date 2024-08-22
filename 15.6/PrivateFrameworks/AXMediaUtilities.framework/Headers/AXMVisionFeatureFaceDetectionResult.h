// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMVISIONFEATUREFACEDETECTIONRESULT_H
#define AXMVISIONFEATUREFACEDETECTIONRESULT_H

@class NSDictionary, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXMVisionFeatureFaceAttributes.h"
#import "AXMVisionFeatureFaceLandmarks.h"

@interface AXMVisionFeatureFaceDetectionResult : NSObject <NSSecureCoding>

 {
    NSInteger _likelyExpression;
}


@property (retain, nonatomic) AXMVisionFeatureFaceAttributes *attributes; // ivar: _attributes
@property (nonatomic) CGFloat attributesConfidence; // ivar: _attributesConfidence
@property (retain, nonatomic) NSDictionary *expressionsAndConfidence; // ivar: _expressionsAndConfidence
@property (nonatomic) NSUInteger faceId; // ivar: _faceId
@property (nonatomic) CGRect frame; // ivar: _frame
@property (retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks; // ivar: _landmarks
@property (retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks3d; // ivar: _landmarks3d
@property (nonatomic) CGFloat landmarksConfidence; // ivar: _landmarksConfidence
@property (readonly, nonatomic) NSInteger likelyExpression;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat nameConfidence; // ivar: _nameConfidence
@property (nonatomic) ? pose; // ivar: _pose
@property (nonatomic) CGFloat poseConfidence; // ivar: _poseConfidence
@property (nonatomic) CGFloat rectanglesConfidence; // ivar: _rectanglesConfidence
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)localizedStringFormatterForExpression:(id)arg0 ;
+(id)nameForFaceExpression:(NSInteger)arg0 ;
-(CGFloat)confidenceForExpression:(NSInteger)arg0 ;
-(NSInteger)_expressionForString:(id)arg0 ;
-(id)_init;
-(id)descriptionForExpression:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
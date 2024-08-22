// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARHWFACEDETECTION_H
#define ARHWFACEDETECTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARHWFaceDetection : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger ID; // ivar: _ID
@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) NSInteger detectionOrientation; // ivar: _detectionOrientation
@property (nonatomic) CGFloat rollAngleInDegrees; // ivar: _rollAngleInDegrees
@property (nonatomic) ? time; // ivar: _time


+(BOOL)supportsSecureCoding;
+(id)faceDetectionFromDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFaceDetection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
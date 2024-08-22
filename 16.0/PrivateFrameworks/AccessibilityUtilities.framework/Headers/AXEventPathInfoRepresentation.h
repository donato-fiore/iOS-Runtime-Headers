// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXEVENTPATHINFOREPRESENTATION_H
#define AXEVENTPATHINFOREPRESENTATION_H

@class NSString;
@protocol AXEventRepresentationDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXEventPathInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>



@property (nonatomic) float altitude; // ivar: _altitude
@property (nonatomic) float azimuth; // ivar: _azimuth
@property (nonatomic) float barrelPressure; // ivar: _barrelPressure
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int didUpdateMask; // ivar: _didUpdateMask
@property (readonly) NSUInteger hash;
@property (nonatomic) float orbValue; // ivar: _orbValue
@property (nonatomic) float pathDensity; // ivar: _pathDensity
@property (nonatomic) unsigned int pathEventMask; // ivar: _pathEventMask
@property (nonatomic) unsigned char pathIdentity; // ivar: _pathIdentity
@property (nonatomic) unsigned char pathIndex; // ivar: _pathIndex
@property (nonatomic) CGPoint pathLocation; // ivar: _pathLocation
@property (nonatomic) float pathMajorRadius; // ivar: _pathMajorRadius
@property (nonatomic) float pathMajorRadiusTolerance; // ivar: _pathMajorRadiusTolerance
@property (nonatomic) float pathMinorRadius; // ivar: _pathMinorRadius
@property (nonatomic) float pathPressure; // ivar: _pathPressure
@property (nonatomic) unsigned char pathProximity; // ivar: _pathProximity
@property (nonatomic) float pathQuality; // ivar: _pathQuality
@property (nonatomic) float pathTwist; // ivar: _pathTwist
@property (nonatomic) *void pathWindow; // ivar: _pathWindow
@property (nonatomic) unsigned int pathWindowContextID; // ivar: _pathWindowContextID
@property (nonatomic) BOOL shouldSetTouchFlag; // ivar: _shouldSetTouchFlag
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transducerType; // ivar: _transducerType
@property (nonatomic) unsigned int willUpdateMask; // ivar: _willUpdateMask


+(BOOL)supportsSecureCoding;
+(id)representationWithPathInfo:(struct ? *)arg0 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeToPathInfo:(struct ? *)arg0 ;


@end


#endif
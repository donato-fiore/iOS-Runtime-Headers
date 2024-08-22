// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACEGAZE_H
#define VNFACEGAZE_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"
#import "VNPixelBufferObservation.h"

@interface VNFaceGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding>

 {
    VNRequestSpecifier *_originatingRequestSpecifier;
}


@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) NSUUID *faceObservationUUID; // ivar: _faceObservationUUID
@property (readonly, nonatomic) VNPixelBufferObservation *gazeMask; // ivar: _gazeMask
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) CGPoint location; // ivar: _location
@property (readonly, nonatomic) NSUUID *lookedAtFaceObservationUUID; // ivar: _lookedAtFaceObservationUUID
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )locationInTopLeftOrigin:(BOOL)arg0 orientation:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
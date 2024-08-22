// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACESCREENGAZE_H
#define VNFACESCREENGAZE_H

@protocol NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNFaceScreenGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding>

 {
    CGPoint _screenGaze;
    VNRequestSpecifier *_originatingRequestSpecifier;
}


@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )screenGazeRawOutputInCentimeters;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
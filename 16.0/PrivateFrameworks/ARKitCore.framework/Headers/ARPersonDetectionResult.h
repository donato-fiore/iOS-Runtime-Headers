// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPERSONDETECTIONRESULT_H
#define ARPERSONDETECTIONRESULT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARPersonDetectionResult : NSObject <NSCopying>



@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBoundingBox:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGRect )rectScaledToSizeOfPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
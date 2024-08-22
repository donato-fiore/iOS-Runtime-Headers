// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECOGNIZEDPOINT_H
#define VNRECOGNIZEDPOINT_H

@class NSString;


#import "VNDetectedPoint.h"

@interface VNRecognizedPoint : VNDetectedPoint

@property (readonly, copy) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(struct CGPoint )arg0 confidence:(float)arg1 identifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
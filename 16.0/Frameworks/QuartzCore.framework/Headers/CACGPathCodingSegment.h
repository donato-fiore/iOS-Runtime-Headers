// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACGPATHCODINGSEGMENT_H
#define CACGPATHCODINGSEGMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CACGPathCodingSegment : NSObject <NSSecureCoding>

 {
    int _type;
    CGPoint _points;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCGPathElement:(struct CGPathElement *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addToCGPath:(struct CGPath *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
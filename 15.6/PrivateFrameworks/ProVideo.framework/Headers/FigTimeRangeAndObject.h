// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGTIMERANGEANDOBJECT_H
#define FIGTIMERANGEANDOBJECT_H

@protocol FigTimeRangeOperationCopying, NSSecureCoding;


#import "FigTimeRangeObj.h"

@interface FigTimeRangeAndObject : FigTimeRangeObj <FigTimeRangeOperationCopying, NSSecureCoding>

 {
    id *_object;
}




+(BOOL)supportsSecureCoding;
+(id)rangeAndObjectWithRange:(struct ? )arg0 andObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithRange:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)durationObject;
-(id)initWithCMTimeRange:(struct ? )arg0 andObject:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigTimeRange:(struct ? )arg0 andObject:(id)arg1 ;
-(id)object;
-(id)representedToolObject;
-(id)startTimeObject;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
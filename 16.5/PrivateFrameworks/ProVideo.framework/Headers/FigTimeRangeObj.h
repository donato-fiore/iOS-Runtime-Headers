// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGTIMERANGEOBJ_H
#define FIGTIMERANGEOBJ_H

@protocol FigTimeRangeOperationCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FigTimeRangeObj : NSObject <FigTimeRangeOperationCopying, NSCopying, NSSecureCoding>

 {
    ? _range;
}




+(BOOL)supportsSecureCoding;
+(id)rangeWithRange:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)sortByStartTimeAscending:(id)arg0 ;
-(NSInteger)sortByStartTimeDescending:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithRange:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCMTimeRange:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigTimeRange:(struct ? )arg0 ;
-(struct ? )duration;
-(struct ? )end;
-(struct ? )range;
-(struct ? )start;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(struct ? *)arg0 ;
-(void)setDuration:(struct ? )arg0 ;
-(void)setRange:(struct ? )arg0 ;
-(void)setStart:(struct ? )arg0 ;


@end


#endif
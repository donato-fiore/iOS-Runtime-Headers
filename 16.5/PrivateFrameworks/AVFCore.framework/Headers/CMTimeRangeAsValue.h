// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMTIMERANGEASVALUE_H
#define CMTIMERANGEASVALUE_H

@class NSValue;



@interface CMTimeRangeAsValue : NSValue {
    ? _timeRange;
}




+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeRange:(struct ? )arg0 ;
-(BOOL)isEqualToValue:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(char *)objCType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )CMTimeRangeValue;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;


@end


#endif
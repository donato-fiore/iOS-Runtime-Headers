// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLLOCATIONMATCHINFO_H
#define CLLOCATIONMATCHINFO_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, nonatomic) CLLocationCoordinate2D matchCoordinate;
@property (readonly, nonatomic) CGFloat matchCourse;
@property (readonly, copy, nonatomic) NSData *matchDataArray;
@property (readonly, nonatomic) int matchFormOfWay;
@property (readonly, nonatomic) NSInteger matchQuality;
@property (readonly, nonatomic) int matchRoadClass;
@property (readonly, nonatomic, getter=isMatchShifted) BOOL matchShifted;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchQuality:(NSInteger)arg0 matchCoordinate:(struct CLLocationCoordinate2D )arg1 matchCourse:(CGFloat)arg2 matchFormOfWay:(int)arg3 matchRoadClass:(int)arg4 matchShifted:(BOOL)arg5 ;
-(id)initWithMatchQuality:(NSInteger)arg0 matchCoordinate:(struct CLLocationCoordinate2D )arg1 matchCourse:(CGFloat)arg2 matchFormOfWay:(int)arg3 matchRoadClass:(int)arg4 matchShifted:(BOOL)arg5 matchDataArray:(id)arg6 ;
-(id)shortDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
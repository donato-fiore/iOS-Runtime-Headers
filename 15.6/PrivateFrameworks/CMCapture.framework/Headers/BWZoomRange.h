// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWZOOMRANGE_H
#define BWZOOMRANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BWZoomRange : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) float fudgedLowerBound; // ivar: _fudgedLowerBound
@property (readonly, nonatomic) float fudgedUpperBound; // ivar: _fudgedUpperBound
@property (readonly, nonatomic) float lowerBound; // ivar: _lowerBound
@property (readonly, nonatomic) float upperBound; // ivar: _upperBound


+(id)fudgedZoomRangeWithLower:(float)arg0 upperBound:(float)arg1 fudgedLowerBound:(float)arg2 fudgedUpperBound:(float)arg3 ;
+(id)zoomRangeWithLower:(float)arg0 upperBound:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)applyFudgeToZoomFactor:(float)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLowerBound:(float)arg0 upperBound:(float)arg1 ;
-(id)initWithLowerBound:(float)arg0 upperBound:(float)arg1 fudgedLowerBound:(float)arg2 fudgedUpperBound:(float)arg3 ;


@end


#endif
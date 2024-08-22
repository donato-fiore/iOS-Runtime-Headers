// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLROUTEBOUNDINGBOX_H
#define CLROUTEBOUNDINGBOX_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLRouteBoundingBox : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat maxLatitude; // ivar: _maxLatitude
@property (readonly, nonatomic) CGFloat maxLongitude; // ivar: _maxLongitude
@property (readonly, nonatomic) CGFloat minLatitude; // ivar: _minLatitude
@property (readonly, nonatomic) CGFloat minLongitude; // ivar: _minLongitude
@property (readonly, nonatomic) int nColumns; // ivar: _nColumns
@property (readonly, nonatomic) int nRows; // ivar: _nRows


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinLatitude:(CGFloat)arg0 maxLatitude:(CGFloat)arg1 minLongitude:(CGFloat)arg2 maxLongitude:(CGFloat)arg3 nRows:(int)arg4 nColumns:(int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
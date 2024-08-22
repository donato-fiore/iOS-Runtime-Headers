// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOORDINATEDRECT_H
#define PXCOORDINATEDRECT_H

@protocol NSCopying, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface PXCoordinatedRect : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic) CGRect rect; // ivar: _rect


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGRect )rectInCoordinateSpace:(id)arg0 ;


@end


#endif
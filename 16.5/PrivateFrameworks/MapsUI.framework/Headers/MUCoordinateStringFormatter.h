// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUCOORDINATESTRINGFORMATTER_H
#define MUCOORDINATESTRINGFORMATTER_H


#import <Foundation/Foundation.h>


@interface MUCoordinateStringFormatter : NSObject

@property (nonatomic, getter=isCoarseLocation) BOOL coarseLocation; // ivar: _coarseLocation


-(id)_coordinatePartStringForValue:(CGFloat)arg0 positiveSymbol:(int)arg1 negativeSymbol:(int)arg2 ;
-(id)stringFromCoordinate:(struct CLLocationCoordinate2D )arg0 ;


@end


#endif
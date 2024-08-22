// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUDISPLAYLOCATIONPROVIDER_H
#define PUDISPLAYLOCATIONPROVIDER_H

@protocol PUDisplayLocationProvider, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface PUDisplayLocationProvider : NSObject <PUDisplayLocationProvider>



@property (readonly, nonatomic) NSObject<UICoordinateSpace> *_coordinateSpace; // ivar: __coordinateSpace
@property (readonly, nonatomic) CGPoint _point; // ivar: __point


-(id)init;
-(id)initWithPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;


@end


#endif
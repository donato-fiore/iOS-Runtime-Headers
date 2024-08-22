// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCREENFIXEDCOORDINATESPACE_H
#define _UISCREENFIXEDCOORDINATESPACE_H

@class NSString;
@protocol UICoordinateSpace;

#import <Foundation/Foundation.h>

#import "UIScreen.h"

@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace>



@property (nonatomic, setter=_setScreen:) UIScreen *_screen; // ivar: _screen
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSMAPRECT_H
#define _UIFOCUSMAPRECT_H

@class NSString;
@protocol _UIFocusMapArea, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UIFocusMapRect : NSObject <_UIFocusMapArea>



@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)intersectsRect:(struct CGRect )arg0 ;
-(BOOL)intersectsRegion:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)intersectionWithRegion:(id)arg0 ;


@end


#endif
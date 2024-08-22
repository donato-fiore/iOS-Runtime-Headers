// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSREGION_H
#define CSREGION_H

@class NSString;
@protocol NSCopying, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface CSRegion : NSObject <NSCopying, UICoordinateSpace>



@property (readonly, nonatomic) CGRect bounds;
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect extent; // ivar: _extent
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (weak, nonatomic) NSObject<UICoordinateSpace> *identity; // ivar: _identity
@property (weak, nonatomic) id *provider; // ivar: _provider
@property (nonatomic, getter=isReservedForHorizontalScrolling) BOOL reservedForHorizontalScrolling; // ivar: _reservedForHorizontalScrolling
@property (nonatomic) NSInteger role; // ivar: _role
@property (readonly) Class superclass;


+(id)regionForCoordinateSpace:(id)arg0 ;
+(id)regionForCoordinateSpace:(id)arg0 withExtent:(struct CGRect )arg1 ;
-(BOOL)intersectsCoordinateSpace:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoordinateSpace:(id)arg0 withExtent:(struct CGRect )arg1 role:(NSInteger)arg2 ;
-(id)regionForCoordinateSpace:(id)arg0 ;
-(id)role:(NSInteger)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;


@end


#endif
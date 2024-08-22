// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCONNECTIONLINEPATHSOURCE_H
#define TSDCONNECTIONLINEPATHSOURCE_H

@protocol TSDSmartPathSource;


#import "TSDBezierPathSource.h"

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>



@property (nonatomic) CGFloat outsetFrom; // ivar: mOutsetFrom
@property (nonatomic) CGFloat outsetTo; // ivar: mOutsetTo
@property (nonatomic) int type; // ivar: mType


+(id)pathSourceAtAngleOfSize:(struct CGSize )arg0 forType:(int)arg1 ;
+(id)pathSourceOfLength:(CGFloat)arg0 ;
-(BOOL)isCircular;
-(BOOL)isLineSegment;
-(BOOL)isRectangular;
-(NSInteger)pathElementIndexForKnobTag:(NSUInteger)arg0 ;
-(NSUInteger)numberOfControlKnobs;
-(id)bezierPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithBezierPath:(id)arg0 ;
-(struct CGPoint )fixedPointForControlKnobChange;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(void)bend;
-(void)p_setBezierPath:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCCHARBOXCONTEXT_H
#define CCCHARBOXCONTEXT_H


#import <Foundation/Foundation.h>


@interface CCCharBoxContext : NSObject

@property unsigned int allocationSize; // ivar: allocationSize
@property float bBottom; // ivar: bBottom
@property float bTop; // ivar: bTop
@property *NSUInteger charBoxFlags; // ivar: charBoxFlags
@property *unsigned short charboxROIFullVectorHeight2; // ivar: charboxROIFullVectorHeight2
@property *unsigned short charboxROIFullVectorRowStart; // ivar: charboxROIFullVectorRowStart
@property unsigned short filterWalkUpDownCount; // ivar: filterWalkUpDownCount
@property *float floatVectorSumProd; // ivar: floatVectorSumProd
@property short loopBigBox; // ivar: loopBigBox
@property short loopBigBoxPrev; // ivar: loopBigBoxPrev
@property float mBottom; // ivar: mBottom
@property float mTop; // ivar: mTop
@property unsigned short medianHeightBottom; // ivar: medianHeightBottom
@property unsigned short medianHeightTop; // ivar: medianHeightTop
@property float posLL; // ivar: posLL
@property float posLR; // ivar: posLR
@property float posUL; // ivar: posUL
@property float posUR; // ivar: posUR
@property char * pulseVectorHeightCharBox; // ivar: pulseVectorHeightCharBox
@property char * pulseVectorHeightCharBoxAdaptive; // ivar: pulseVectorHeightCharBoxAdaptive


-(BOOL)makeAllocationsForWidth:(NSUInteger)arg0 ;
-(unsigned int)checkFlag:(NSUInteger)arg0 atIndex:(unsigned int)arg1 ;
-(void)clearFlag:(NSUInteger)arg0 atIndex:(unsigned int)arg1 ;
-(void)copyFlagValue:(NSUInteger)arg0 toTarget:(NSUInteger)arg1 atIndex:(unsigned int)arg2 ;
-(void)dealloc;
-(void)releaseAllocations;
-(void)resetBoxBounds;
-(void)setFlag:(NSUInteger)arg0 atIndex:(unsigned int)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKCOIDPLACEMENTBASEOPERATION_H
#define TSKCOIDPLACEMENTBASEOPERATION_H



#import "TSKCOAbstractOperation.h"

@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation

@property (readonly, nonatomic) int fromIndex; // ivar: _fromIndex
@property (readonly, nonatomic) BOOL isDominating; // ivar: _isDominating
@property (readonly, nonatomic) int placementType;
@property (readonly, nonatomic) int toIndex; // ivar: _toIndex


+(id)stringForPlacementType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAddress:(*void)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 ;
-(id)initWithAddress:(*void)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3 noop:(BOOL)arg4 ;
-(id)initWithUnarchiver:(id)arg0 message:(*void)arg1 ;
-(id)operationWithNewNoop:(BOOL)arg0 ;
-(id)toString;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif
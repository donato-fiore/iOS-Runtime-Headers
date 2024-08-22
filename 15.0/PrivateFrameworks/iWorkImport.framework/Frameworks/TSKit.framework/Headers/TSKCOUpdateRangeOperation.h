// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCOUPDATERANGEOPERATION_H
#define TSKCOUPDATERANGEOPERATION_H

@protocol TSKCORangeOperation;


#import "TSKCOUpdateOperation.h"

@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation>

 {
    vector<_NSRange, std::allocator<_NSRange>> _rangeVector;
}


@property (readonly, nonatomic) *void rangeVector;
@property (readonly, nonatomic) int transformBehavior; // ivar: _transformBehavior


+(id)stringForTransformBehavior:(int)arg0 ;
+(int)p_determineTransformBehaviorByPropertyId:(unsigned short)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 propertyId:(unsigned short)arg2 ;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 propertyId:(unsigned short)arg2 noop:(BOOL)arg3 ;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 propertyId:(unsigned short)arg2 transformBehavior:(int)arg3 noop:(BOOL)arg4 ;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 propertyType:(struct ? )arg2 transformBehavior:(int)arg3 noop:(BOOL)arg4 ;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 selectionPropertyId:(unsigned short)arg2 ;
-(id)initWithUnarchiver:(id)arg0 message:(*void)arg1 ;
-(id)operationWithNewNoop:(BOOL)arg0 ;
-(id)toString;
-(struct shared_ptr<TSKCO::AbstractOperation> )newTransformableOperation;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif
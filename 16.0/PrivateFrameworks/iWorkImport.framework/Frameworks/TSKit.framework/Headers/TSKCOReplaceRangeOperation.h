// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKCOREPLACERANGEOPERATION_H
#define TSKCOREPLACERANGEOPERATION_H

@protocol TSKCORangeOperation;


#import "TSKCOReplaceOperation.h"

@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation>

 {
    vector<_NSRange, std::allocator<_NSRange>> _rangeVector;
}


@property (readonly, nonatomic) NSUInteger insertLength; // ivar: _insertLength
@property (readonly, nonatomic) BOOL preserveLowerPriorityLocation; // ivar: _preserveLowerPriorityLocation
@property (readonly, nonatomic) *void rangeVector;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualWithIgnoringEmptyRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 insertLength:(NSUInteger)arg2 ;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 insertLength:(NSUInteger)arg2 noop:(BOOL)arg3 ;
-(id)initWithAddress:(*void)arg0 rangeVector:(*void)arg1 insertLength:(NSUInteger)arg2 preserveLowerPriorityLocation:(BOOL)arg3 noop:(BOOL)arg4 ;
-(id)initWithUnarchiver:(id)arg0 message:(*void)arg1 ;
-(id)operationWithNewNoop:(BOOL)arg0 ;
-(id)toString;
-(struct shared_ptr<TSKCO::AbstractOperation> )newTransformableOperation;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEREFERENCESETWRAPPER_H
#define TSCEREFERENCESETWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEReferenceSetWrapper : NSObject <NSCopying>

 {
    *void _referenceSet;
}


@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) *void referenceSet;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDependencyTracker:(*void)arg0 ;
-(id)initWithReferenceSet:(*void)arg0 ;
-(void)dealloc;
-(void)forallRefs:(id)arg0 ;
-(void)foreachCellRef:(id)arg0 ;
-(void)foreachRangeRef:(id)arg0 ;
-(void)foreachSpanningRangeRef:(id)arg0 ;
-(void)insertAnyRef:(struct TSCEAnyRef *)arg0 ;
-(void)insertCellRef:(struct TSCECellRef *)arg0 ;
-(void)insertRangeRef:(struct TSCERangeRef *)arg0 ;
-(void)insertRefs:(id)arg0 ;
-(void)insertSpanningRangeRef:(struct TSCESpanningRangeRef *)arg0 ;
-(void)removeCellRef:(struct TSCECellRef *)arg0 ;


@end


#endif
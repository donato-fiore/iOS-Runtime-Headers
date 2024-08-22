// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRVMSTATE_H
#define XRVMSTATE_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface XRVMState : NSObject <NSSecureCoding>

 {
    NSUInteger _machAbsolute;
    NSUInteger _traceRelative;
    NSMutableArray *_regions;
    NSUInteger _residentSize;
    NSUInteger _swapSize;
    NSUInteger _dirtySize;
    NSUInteger _totalSize;
    NSUInteger _sharedRegionStart;
    NSUInteger _sharedRegionLength;
    *__CFDictionary _pageAnnotationsByRegion;
    unsigned int _task;
}




+(BOOL)supportsSecureCoding;
+(id)currentStateForTask:(unsigned int)arg0 pid:(int)arg1 previousState:(id)arg2 dehydratedDiffVersion:(BOOL)arg3 ;
+(void)initialize;
-(NSUInteger)dirtySize;
-(NSUInteger)machAbsoluteTimestamp;
-(NSUInteger)residentSize;
-(NSUInteger)swappedSize;
-(NSUInteger)traceRelativeTimestamp;
-(NSUInteger)virtualSize;
-(id)_annotationForRegion:(id)arg0 ;
-(id)description;
-(id)detailsForRegion:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)regionForAddress:(NSUInteger)arg0 ;
-(id)regions;
-(id)regionsWithOptions:(int)arg0 ;
-(id)summaryRegionsWithOptions:(int)arg0 ;
-(void)_addRegion:(id)arg0 annotation:(id)arg1 new:(BOOL)arg2 ;
-(void)_annotateRange:(struct _CSRange )arg0 withPath:(id)arg1 type:(id)arg2 ;
-(void)_recalculateSizes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)hydrateWithPreviousState:(id)arg0 ;
-(void)setPageSize:(NSUInteger)arg0 ;


@end


#endif
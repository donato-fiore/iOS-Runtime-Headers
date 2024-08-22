// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSTATECAPTURERECENTSBUFFER_H
#define IMSTATECAPTURERECENTSBUFFER_H

@class NSString, NSPointerArray;

#import <Foundation/Foundation.h>


@interface IMStateCaptureRecentsBuffer : NSObject

@property (nonatomic) *NSUInteger handles; // ivar: _handles
@property (readonly, nonatomic) NSUInteger maximumNumberOfTrackedObjects; // ivar: _maximumNumberOfTrackedObjects
@property (nonatomic) NSUInteger nextInsertionIndex; // ivar: _nextInsertionIndex
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSPointerArray *trackedObjects; // ivar: _trackedObjects


-(id)initWithTitle:(id)arg0 maximumNumberOfTrackedObjects:(NSUInteger)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)promoteRecentObject:(id)arg0 ;
-(void)registerStateCaptureBlockWithQueue:(id)arg0 ;


@end


#endif
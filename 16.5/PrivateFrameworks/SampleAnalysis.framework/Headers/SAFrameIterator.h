// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFRAMEITERATOR_H
#define SAFRAMEITERATOR_H

@class NSMutableDictionary, NSString, NSArray;
@protocol SAFrameIterator;

#import <Foundation/Foundation.h>

#import "SAFrame.h"
#import "SASharedCache.h"

@interface SAFrameIterator : NSObject <SAFrameIterator>

 {
    SAFrame *_frame;
}


@property (retain) NSMutableDictionary *addressTranslations; // ivar: _addressTranslations
@property BOOL assumeUserBinaryLoadInfosContainMainBinary; // ivar: _assumeUserBinaryLoadInfosContainMainBinary
@property NSUInteger backtracer; // ivar: _backtracer
@property BOOL checkLR; // ivar: _checkLR
@property NSUInteger continuation; // ivar: _continuation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isKernelStackTruncated; // ivar: _isKernelStackTruncated
@property BOOL isSwiftAsyncStackTruncated; // ivar: _isSwiftAsyncStackTruncated
@property BOOL isUserStackTruncated; // ivar: _isUserStackTruncated
@property (retain) NSArray *kernelBinaryLoadInfos; // ivar: _kernelBinaryLoadInfos
@property *NSUInteger kernelFrames; // ivar: _kernelFrames
@property unsigned int numKernelFrames; // ivar: _numKernelFrames
@property unsigned int numSwiftAsyncFrames; // ivar: _numSwiftAsyncFrames
@property unsigned int numUserFrames; // ivar: _numUserFrames
@property (retain) SASharedCache *sharedCache; // ivar: _sharedCache
@property (readonly) Class superclass;
@property *NSUInteger swiftAsyncFrames; // ivar: _swiftAsyncFrames
@property unsigned int swiftAsyncStitchIndex; // ivar: _swiftAsyncStitchIndex
@property (retain) NSArray *userBinaryLoadInfos; // ivar: _userBinaryLoadInfos
@property *NSUInteger userFrames; // ivar: _userFrames


-(BOOL)hasKernelStack;
-(BOOL)hasStack;
-(BOOL)hasSwiftAsyncStack;
-(BOOL)hasUserStack;
-(id)init;
-(void)clearTaskData;
-(void)clearThreadData;
-(void)dealloc;
-(void)iterateFramesWithBacktraceStyle:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif
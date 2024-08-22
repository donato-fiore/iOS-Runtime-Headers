// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAFRAMEITERATOR_H
#define SAFRAMEITERATOR_H

@class NSMutableDictionary, NSString, NSArray;
@protocol SAFrameIterator;

#import <Foundation/Foundation.h>

#import "SAFrame.h"
#import "SALeafFrame.h"
#import "SAKernelFrame.h"
#import "SAKernelLeafFrame.h"
#import "SAUserTruncatedBacktrace.h"
#import "SASharedCache.h"

@interface SAFrameIterator : NSObject <SAFrameIterator>

 {
    SAFrame *_user;
    SALeafFrame *_userLeaf;
    SAKernelFrame *_kernel;
    SAKernelLeafFrame *_kernelLeaf;
    SAUserTruncatedBacktrace *_truncatedBacktrace;
    BOOL _hideKernelFrames;
    BOOL _hideUserFrames;
}


@property (retain) NSMutableDictionary *addressTranslations; // ivar: _addressTranslations
@property BOOL assumeUserBinaryLoadInfosContainMainBinary; // ivar: _assumeUserBinaryLoadInfosContainMainBinary
@property NSUInteger backtracer; // ivar: _backtracer
@property BOOL checkLR; // ivar: _checkLR
@property NSUInteger continuation; // ivar: _continuation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isUserStackTruncated; // ivar: _isUserStackTruncated
@property (retain) NSArray *kernelBinaryLoadInfos; // ivar: _kernelBinaryLoadInfos
@property *NSUInteger kernelFrames; // ivar: _kernelFrames
@property int numKernelFrames; // ivar: _numKernelFrames
@property int numUserFrames; // ivar: _numUserFrames
@property (retain) SASharedCache *sharedCache; // ivar: _sharedCache
@property (readonly) Class superclass;
@property (retain) NSArray *userBinaryLoadInfos; // ivar: _userBinaryLoadInfos
@property *NSUInteger userFrames; // ivar: _userFrames


-(BOOL)hasKernelStack;
-(BOOL)hasStack;
-(BOOL)hasUserStack;
-(void)clearTaskData;
-(void)clearThreadData;
-(void)dealloc;
-(void)exposeAllFrames;
-(void)exposeKernelFramesOnly;
-(void)exposeUserFramesOnly;
-(void)iterateFrames:(id)arg0 ;


@end


#endif
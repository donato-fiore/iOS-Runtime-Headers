// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHPSEUDOFLIPBOOK_H
#define BLSHPSEUDOFLIPBOOK_H

@class NSMutableArray, NSArray, NSString;
@protocol BLSHFlipbook, BLSHRenderedFlipbookFrame;

#import <Foundation/Foundation.h>


@interface BLSHPseudoFlipbook : NSObject <BLSHFlipbook>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_activeFrames;
    NSUInteger _nextframeID;
}


@property (readonly, nonatomic) NSArray *activeFrames;
@property (readonly, nonatomic) NSObject<BLSHRenderedFlipbookFrame> *captureFrameOnGlass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BLSHRenderedFlipbookFrame> *frameOnGlass;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BLSHRenderedFlipbookFrame> *lastRenderedFrame;
@property (readonly, nonatomic) NSUInteger memoryUsage;
@property (readonly) Class superclass;


-(id)cancelAllFrames;
-(id)init;
-(void)collect;
-(void)invalidate;
-(void)purge;
-(void)renderFrameForPresentation:(id)arg0 dateSpecifier:(id)arg1 completion:(id)arg2 ;


@end


#endif
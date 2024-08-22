// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOVSTREAMOPTIONS_H
#define MOVSTREAMOPTIONS_H


#import <Foundation/Foundation.h>


@interface MOVStreamOptions : NSObject {
    BOOL _debugMode;
}


@property (readonly) CGFloat bitrateMultiplier;
@property (readonly) NSUInteger bitrateOverride;
@property (readonly) BOOL disableFrameReordering;
@property (readonly) BOOL force10bitMonoByVT;
@property (readonly) BOOL forceColorLossless;
@property (readonly) BOOL forceLossless8bitMonoByVT;
@property (readonly) BOOL skipSourceHint;


+(id)sharedOptions;
-(id)currentOptions;
-(id)init;
-(id)localDefaults;
-(id)standardDefaultValues;
-(void)checkBossMode;
-(void)checkHasValue:(id)arg0 changedForKey:(id)arg1 ;
-(void)registerStandardDefaults;


@end


#endif
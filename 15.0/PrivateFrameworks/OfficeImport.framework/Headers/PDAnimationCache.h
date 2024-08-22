// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDANIMATIONCACHE_H
#define PDANIMATIONCACHE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PDBuild.h"
#import "PDAnimateMotionBehavior.h"
#import "PDAnimationTarget.h"

@interface PDAnimationCache : NSObject

@property (retain, nonatomic) PDBuild *build; // ivar: mBuild
@property (nonatomic) CGFloat delay; // ivar: mDelay
@property (nonatomic) CGFloat direction; // ivar: mDirection
@property (nonatomic) CGFloat duration; // ivar: mDuration
@property (retain, nonatomic) NSString *groupId; // ivar: mGroupId
@property (nonatomic) BOOL hasDelay; // ivar: mHasDelay
@property (nonatomic) BOOL hasDirection; // ivar: mHasDirection
@property (nonatomic) BOOL hasDuration; // ivar: mHasDuration
@property (nonatomic) BOOL hasPartCount; // ivar: mHasPartCount
@property (nonatomic) BOOL hasValue; // ivar: mHasValue
@property (nonatomic) BOOL isHead; // ivar: mIsHead
@property (nonatomic) int iterateType; // ivar: mIterateType
@property (nonatomic) int level; // ivar: mLevel
@property (retain, nonatomic) PDAnimateMotionBehavior *motionPath; // ivar: mMotionPath
@property (nonatomic) int nodeType; // ivar: mNodeType
@property (nonatomic) int partCount; // ivar: mPartCount
@property (nonatomic) int presetClass; // ivar: mPresetClass
@property (nonatomic) int presetId; // ivar: mPresetId
@property (nonatomic) int presetSubType; // ivar: mPresetSubType
@property (retain, nonatomic) PDAnimationTarget *target; // ivar: mTarget
@property (nonatomic) CGFloat value; // ivar: mValue


+(id)createAnimationInfoDataForCacheItem:(id)arg0 order:(unsigned int)arg1 ;
+(void)loadAnimationCache:(id)arg0 pdAnimation:(id)arg1 state:(id)arg2 ;
+(void)mapAnimationInfo:(id)arg0 cacheData:(id)arg1 state:(id)arg2 ;
+(void)mapCommonData:(id)arg0 cacheData:(id)arg1 state:(id)arg2 ;
-(id)initWithAnimationInfo:(id)arg0 ;


@end


#endif
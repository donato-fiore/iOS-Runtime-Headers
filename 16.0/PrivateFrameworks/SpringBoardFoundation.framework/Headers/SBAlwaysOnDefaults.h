// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALWAYSONDEFAULTS_H
#define SBALWAYSONDEFAULTS_H

@class NSNumber;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBAlwaysOnDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL enableAlwaysOn;
@property (nonatomic) BOOL enableSwipeToUnlock;
@property (nonatomic) BOOL enableTapToInteract;
@property (nonatomic) BOOL enforceOverallAPLLimit;
@property (nonatomic) BOOL forceAndromedaSupport;
@property (retain, nonatomic) NSNumber *maximumRenderInterval;
@property (nonatomic) BOOL useAlwaysOnBrightnessCurve;
@property (nonatomic) BOOL useDebugColors;


-(void)_bindAndRegisterDefaults;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSMUTABLETOUCHAUTHENTICATIONSPECIFICATION_H
#define BKSMUTABLETOUCHAUTHENTICATIONSPECIFICATION_H

@class NSSet;


#import "BKSTouchAuthenticationSpecification.h"

@interface BKSMutableTouchAuthenticationSpecification : BKSTouchAuthenticationSpecification

@property (nonatomic) NSUInteger authenticationMessageContext;
@property (nonatomic) float backgroundStatisticsFailingContrast;
@property (nonatomic) float backgroundStatisticsForeground;
@property (nonatomic) float backgroundStatisticsPassingContrast;
@property (nonatomic) ? backgroundStatisticsRegion;
@property (copy, nonatomic) NSSet *displays;
@property (nonatomic) NSUInteger hitTestInformationMask;
@property (nonatomic) unsigned int secureName;
@property (nonatomic) unsigned int slotID;




@end


#endif
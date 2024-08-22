// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPDEFAULTS_H
#define SBPIPDEFAULTS_H

@class NSDictionary;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBPIPDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL allowAutoPIP;
@property (nonatomic) BOOL initiallyUsesMinimumPreferredContentSize;
@property (nonatomic) NSUInteger lastKnownCornerPosition;
@property (nonatomic) NSDictionary *lastKnownSizeByContentType;
@property (readonly, nonatomic) BOOL visualizeKeyboardFrame;
@property (readonly, nonatomic) BOOL visualizePositionRegions;


-(void)_bindAndRegisterDefaults;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCORNERGESTUREDEFAULTS_H
#define SBCORNERGESTUREDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBCornerGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSUInteger bottomLeftCornerGestureFeature;
@property (nonatomic) NSUInteger bottomLeftCornerGestureTouchTypes;
@property (nonatomic) NSUInteger bottomRightCornerGestureFeature;
@property (nonatomic) NSUInteger bottomRightCornerGestureTouchTypes;


-(void)_bindAndRegisterDefaults;
-(void)_migrateSkyDefaultsIfNecessary;


@end


#endif
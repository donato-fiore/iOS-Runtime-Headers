// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBPIPDEFAULTS_H
#define SBPIPDEFAULTS_H

@class NSDictionary;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBPIPDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL allowAutoPIP;
@property (nonatomic) BOOL initiallyUsesMinimumPreferredContentSize;
@property (nonatomic) NSDictionary *lastKnownCornerPositionByContentType;
@property (nonatomic) NSDictionary *lastKnownSizeByContentType;
@property (readonly, nonatomic) BOOL visualizeKeyboardFrame;
@property (readonly, nonatomic) BOOL visualizePositionRegions;


-(CGFloat)lastKnownSizeForContentType:(id)arg0 ;
-(NSUInteger)lastKnownCornerPositionForContentType:(id)arg0 ;
-(void)_bindAndRegisterDefaults;
-(void)setLastKnownCornerPosition:(NSUInteger)arg0 contentType:(id)arg1 ;
-(void)setLastKnownSize:(CGFloat)arg0 contentType:(id)arg1 ;


@end


#endif
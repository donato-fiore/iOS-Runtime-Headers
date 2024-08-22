// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXLAYOUTINSTRUCTIONS_H
#define SXLAYOUTINSTRUCTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SXLayoutInstructions : NSObject

@property (readonly, nonatomic) NSArray *instructions; // ivar: _instructions


+(id)defaultInstructions;
-(BOOL)areFulfilledForBlueprint:(id)arg0 ;
-(id)description;
-(id)initWithInstructions:(id)arg0 ;
-(void)didLayoutComponentBlueprint:(id)arg0 blueprint:(id)arg1 ;


@end


#endif
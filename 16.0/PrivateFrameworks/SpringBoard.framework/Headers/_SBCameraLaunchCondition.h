// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBCAMERALAUNCHCONDITION_H
#define _SBCAMERALAUNCHCONDITION_H


#import <Foundation/Foundation.h>


@interface _SBCameraLaunchCondition : NSObject

@property (nonatomic, getter=isMet) BOOL met; // ivar: _met


+(id)conditionWithConditions:(id)arg0 ;
+(id)conditionWithValue:(BOOL)arg0 ;


@end


#endif
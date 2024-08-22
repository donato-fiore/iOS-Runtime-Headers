// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRBUTTONHAPTIC_H
#define _TVRBUTTONHAPTIC_H

@protocol UIFeedbackGeneratorUserInteractionDriven;

#import <Foundation/Foundation.h>


@interface _TVRButtonHaptic : NSObject

@property (retain, nonatomic) NSObject<UIFeedbackGeneratorUserInteractionDriven> *behavior; // ivar: _behavior


+(id)hapticForView:(id)arg0 ;
-(void)userInteractionBegan;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;


@end


#endif
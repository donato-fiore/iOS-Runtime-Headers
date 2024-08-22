// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRBUTTONHAPTIC_H
#define TVRBUTTONHAPTIC_H

@protocol UIFeedbackGeneratorUserInteractionDriven;

#import <Foundation/Foundation.h>


@interface TVRButtonHaptic : NSObject

@property (retain, nonatomic) NSObject<UIFeedbackGeneratorUserInteractionDriven> *behavior; // ivar: _behavior


+(id)hapticForView:(id)arg0 ;
-(void)userInteractionBegan;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;


@end


#endif
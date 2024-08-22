// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKSELECTIONFEEDBACKGENERATOR_H
#define CEKSELECTIONFEEDBACKGENERATOR_H

@class UISelectionFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface CEKSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) unsigned int _endStopSoundID; // ivar: __endStopSoundID
@property (readonly, nonatomic) UISelectionFeedbackGenerator *_feedbackGenerator; // ivar: __feedbackGenerator
@property (readonly, nonatomic) unsigned int _majorTickSoundID; // ivar: __majorTickSoundID
@property (readonly, nonatomic) unsigned int _minorTickSoundID; // ivar: __minorTickSoundID
@property (readonly, nonatomic) unsigned int _overscrollTickSoundID; // ivar: __overscrollTickSoundID


-(id)init;
-(void)dealloc;
-(void)performFeedback;
-(void)playEndTickSound;
-(void)playMajorTickSound;
-(void)playMinorTickSound;
-(void)playOverscrollTickSound;
-(void)prepareFeedback;


@end


#endif
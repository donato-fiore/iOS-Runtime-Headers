// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKAPPQUESTIONCHOICE_H
#define FBKAPPQUESTIONCHOICE_H

@protocol NSSecureCoding;


#import "FBKQuestionChoice.h"
#import "FBKInstalledApp.h"

@interface FBKAppQuestionChoice : FBKQuestionChoice <NSSecureCoding>



@property (retain, nonatomic) FBKInstalledApp *app; // ivar: _app


+(id)otherAppChoiceValue;


@end


#endif
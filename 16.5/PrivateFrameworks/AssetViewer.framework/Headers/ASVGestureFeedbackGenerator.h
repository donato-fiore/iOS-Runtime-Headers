// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVGESTUREFEEDBACKGENERATOR_H
#define ASVGESTUREFEEDBACKGENERATOR_H

@protocol ASVFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface ASVGestureFeedbackGenerator : NSObject

@property (retain, nonatomic) NSObject<ASVFeedbackGenerator> *snapAwayFromScaleFeedbackGenerator; // ivar: _snapAwayFromScaleFeedbackGenerator
@property (retain, nonatomic) NSObject<ASVFeedbackGenerator> *snapToScaleFeedbackGenerator; // ivar: _snapToScaleFeedbackGenerator


-(id)initWithSnapToGenerator:(id)arg0 snapAwayFromGenerator:(id)arg1 ;
-(void)prepare;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEASSESSMENTMODEGESTALT_H
#define AEASSESSMENTMODEGESTALT_H

@protocol AEAssessmentStateReading;

#import <Foundation/Foundation.h>


@interface AEAssessmentModeGestalt : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSObject<AEAssessmentStateReading> *assessmentStateReader; // ivar: _assessmentStateReader


+(id)keyPathsForValuesAffectingActive;
+(id)makeAssessmentStateReaderWithQueue:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;


@end


#endif
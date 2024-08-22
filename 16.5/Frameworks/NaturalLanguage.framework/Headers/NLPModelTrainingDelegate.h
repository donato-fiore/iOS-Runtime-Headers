// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPMODELTRAININGDELEGATE_H
#define NLPMODELTRAININGDELEGATE_H

@class NSString;
@protocol NLModelTrainerDelegate;

#import <Foundation/Foundation.h>


@interface NLPModelTrainingDelegate : NSObject <NLModelTrainerDelegate>

 {
    id *_logHandler;
    BOOL _stop;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)modelTrainerShouldStop:(id)arg0 ;
-(id)initWithLogHandler:(id)arg0 ;
-(void)modelTrainer:(id)arg0 logMessage:(id)arg1 ;


@end


#endif
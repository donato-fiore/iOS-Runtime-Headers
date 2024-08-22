// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMPIPELINECOMPONENT_H
#define IMPIPELINECOMPONENT_H

@protocol IMPipelineComponent;

#import <Foundation/Foundation.h>


@interface IMPipelineComponent : NSObject <IMPipelineComponent>



@property (retain, nonatomic) NSObject<IMPipelineComponent> *nextComponent; // ivar: _nextComponent


+(id)pipelineFromComponents:(id)arg0 ;
-(id)bindTo:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;
-(id)runWithInput:(id)arg0 ;


@end


#endif
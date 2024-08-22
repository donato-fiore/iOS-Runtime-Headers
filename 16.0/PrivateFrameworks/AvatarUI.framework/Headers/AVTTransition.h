// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTTRANSITION_H
#define AVTTRANSITION_H

@class NSString;
@protocol AVTTransition, AVTUILogger, AVTTransitionModel;

#import <Foundation/Foundation.h>


@interface AVTTransition : NSObject <AVTTransition>



@property (nonatomic) BOOL animated; // ivar: _animated
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTTransitionModel> *model; // ivar: _model
@property (copy, nonatomic) id *setupHandler; // ivar: _setupHandler
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


// -(id)initWithModel:(id)arg0 animated:(BOOL)arg1 setupHandler:(id)arg2 completionHandler:(unk)arg3 logger:(id)arg4  ;
-(void)cancel;
-(void)performCancellation;
-(void)performTransition;
-(void)start;


@end


#endif
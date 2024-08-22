// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBLOCKRECOVERYATTEMPTER_H
#define WFBLOCKRECOVERYATTEMPTER_H

@class NSString;
@protocol WFErrorRecoveryAttempting;

#import <Foundation/Foundation.h>


@interface WFBlockRecoveryAttempter : NSObject <WFErrorRecoveryAttempting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handlerBlock; // ivar: _handlerBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(id)initWithHandlerBlock:(id)arg0 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif
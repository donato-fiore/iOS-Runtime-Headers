// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMRESULTPROMISE_H
#define MCMRESULTPROMISE_H

@class NSString;
@protocol MCMResultPromise, MCMResult;

#import <Foundation/Foundation.h>


@interface MCMResultPromise : NSObject <MCMResultPromise>



@property (readonly, nonatomic) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MCMResult> *result; // ivar: _result
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCompletion:(id)arg0 ;
-(void)completeWithResult:(id)arg0 ;


@end


#endif
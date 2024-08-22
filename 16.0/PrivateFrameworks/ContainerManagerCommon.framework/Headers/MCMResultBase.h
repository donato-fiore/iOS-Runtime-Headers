// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMRESULTBASE_H
#define MCMRESULTBASE_H

@class NSString;
@protocol MCMResult_XPC, MCMResult;

#import <Foundation/Foundation.h>

#import "MCMError.h"

@interface MCMResultBase : NSObject <MCMResult_XPC, MCMResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MCMError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)init;
-(id)initWithError:(id)arg0 ;


@end


#endif
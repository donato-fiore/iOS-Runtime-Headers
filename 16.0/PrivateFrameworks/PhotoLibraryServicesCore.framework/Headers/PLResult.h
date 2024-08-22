// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLRESULT_H
#define PLRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface PLResult : NSObject

@property (readonly, copy) NSError *error;
@property (readonly) BOOL isFailure;
@property (readonly) BOOL isSuccess;
@property (readonly) id *result;


+(id)failureWithError:(id)arg0 ;
+(id)successWithResult:(id)arg0 ;
-(id)description;
-(id)initForSubclasses;
-(id)resultWithError:(*id)arg0 ;


@end


#endif
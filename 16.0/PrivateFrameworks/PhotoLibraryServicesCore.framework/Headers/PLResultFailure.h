// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLRESULTFAILURE_H
#define PLRESULTFAILURE_H

@class NSError;


#import "PLResult.h"

@interface PLResultFailure : PLResult {
    NSError *_error;
}




-(BOOL)isFailure;
-(BOOL)isSuccess;
-(id)description;
-(id)error;
-(id)initWithError:(id)arg0 ;
-(id)result;
-(id)resultWithError:(*id)arg0 ;


@end


#endif
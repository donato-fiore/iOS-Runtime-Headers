// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLRESULTSUCCESS_H
#define PLRESULTSUCCESS_H



#import "PLResult.h"

@interface PLResultSuccess : PLResult {
    id *_result;
}




-(BOOL)isFailure;
-(BOOL)isSuccess;
-(id)description;
-(id)error;
-(id)initWithResult:(id)arg0 ;
-(id)result;
-(id)resultWithError:(*id)arg0 ;


@end


#endif
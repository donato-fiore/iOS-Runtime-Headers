// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTPROMISERESULT_H
#define MTPROMISERESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface MTPromiseResult : NSObject

@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) id *result; // ivar: _result


-(id)initWithResult:(id)arg0 error:(id)arg1 ;


@end


#endif
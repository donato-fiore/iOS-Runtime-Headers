// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFUTURERESULT_H
#define CNFUTURERESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface CNFutureResult : NSObject

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) id *result; // ivar: _result


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
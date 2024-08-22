// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKREQUESTRECORDWRAPPER_H
#define FBKREQUESTRECORDWRAPPER_H


#import <Foundation/Foundation.h>

#import "FBKRequestRecord.h"

@interface FBKRequestRecordWrapper : NSObject

@property (nonatomic) BOOL isFailure; // ivar: _isFailure
@property (retain, nonatomic) FBKRequestRecord *wrappedObject; // ivar: _wrappedObject


-(id)initWithRequest:(id)arg0 response:(id)arg1 session:(id)arg2 cookies:(id)arg3 body:(id)arg4 error:(id)arg5 ;
-(id)initWithURL:(id)arg0 httpMethod:(id)arg1 responseData:(id)arg2 ;


@end


#endif
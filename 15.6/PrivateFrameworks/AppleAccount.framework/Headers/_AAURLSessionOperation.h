// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AAURLSESSIONOPERATION_H
#define _AAURLSESSIONOPERATION_H

@class NSMutableData, NSData;

#import <Foundation/Foundation.h>


@interface _AAURLSessionOperation : NSObject {
    NSMutableData *_mutableData;
}


@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy, nonatomic) NSData *data;


+(id)operationWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithCompletion:(id)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)invokeCompletionWithResponse:(id)arg0 error:(id)arg1 ;


@end


#endif
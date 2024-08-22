// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKASYNCTRANSACTIONOPERATION_H
#define CKASYNCTRANSACTIONOPERATION_H

@protocol NSObject;

#import <Foundation/Foundation.h>


@interface CKAsyncTransactionOperation : NSObject

@property (copy, nonatomic) id *operationCompletionBlock; // ivar: _operationCompletionBlock
@property (retain) NSObject<NSObject> *value; // ivar: _value


-(id)initWithOperationCompletionBlock:(id)arg0 ;
-(void)callAndReleaseCompletionBlock:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif
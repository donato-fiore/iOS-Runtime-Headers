// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCOPERATIONBUFFER_H
#define DOCOPERATIONBUFFER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DOCOperationBuffer : NSObject

@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL locked; // ivar: _locked
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue


-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 targetQueue:(id)arg1 ;
-(void)buffer:(id)arg0 ;
-(void)signal;


@end


#endif
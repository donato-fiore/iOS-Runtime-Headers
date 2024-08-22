// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSCOALESCEHELPER_H
#define BCSCOALESCEHELPER_H

@class NSMutableDictionary, NSString;
@protocol BCSCoalesceHelperProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BCSCoalesceHelper : NSObject <BCSCoalesceHelperProtocol>

 {
    NSMutableDictionary *_coalesceObjectPool;
    NSObject<OS_dispatch_queue> *_coalesceHelperDispatchQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dequeueCoalesceObjectsForCoalesceKey:(id)arg0 ;
-(id)initWithQOSClass:(unsigned int)arg0 ;
-(void)enqueueCoalesceObject:(id)arg0 isDuplicateRequest:(*BOOL)arg1 ;


@end


#endif
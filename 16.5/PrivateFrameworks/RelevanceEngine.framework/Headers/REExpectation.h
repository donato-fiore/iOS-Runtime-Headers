// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REEXPECTATION_H
#define REEXPECTATION_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface REExpectation : NSObject {
    NSObject<OS_dispatch_group> *_group;
    uint8_t _count;
}


@property (readonly, nonatomic) NSInteger outstandingOperations;


-(id)init;
-(void)beginOperation;
-(void)endOperation;
-(void)notifyOperationsCompleteOnQueue:(id)arg0 block:(id)arg1 ;
-(void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg0 block:(id)arg1 ;


@end


#endif
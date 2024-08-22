// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LASECRET_H
#define LASECRET_H

@protocol LAKeyStoreGenericPassword, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LARight.h"

@interface LASecret : NSObject {
    LARight *_right;
    id<LAKeyStoreGenericPassword> *_genp;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _instanceID;
}




-(id)description;
-(id)identifier;
-(id)initWithGenericPassword:(id)arg0 ;
-(id)right;
-(void)dealloc;
-(void)loadDataWithCompletion:(id)arg0 ;
-(void)setRight:(id)arg0 ;


@end


#endif
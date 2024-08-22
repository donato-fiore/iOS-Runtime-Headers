// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSEARCHERFACTORY_H
#define CKVSEARCHERFACTORY_H

@protocol CKVSearcherProvider, OS_dispatch_queue, CKVSearchServiceProvider;

#import <Foundation/Foundation.h>


@interface CKVSearcherFactory : NSObject <CKVSearcherProvider>

 {
    NSObject<OS_dispatch_queue> *_searcherQueue;
    NSObject<CKVSearchServiceProvider> *_serviceProvider;
}




+(id)sharedSearcherFactory;
-(id)init;
-(id)initWithQueue:(id)arg0 serviceProvider:(id)arg1 ;
-(id)makeSearcher;


@end


#endif
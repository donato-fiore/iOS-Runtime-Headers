// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSEARCHERFACTORY_H
#define CKVSEARCHERFACTORY_H

@protocol CKVSearcherProvider, CKVSearchServiceProvider;

#import <Foundation/Foundation.h>


@interface CKVSearcherFactory : NSObject <CKVSearcherProvider>

 {
    NSObject<CKVSearchServiceProvider> *_serviceProvider;
}




+(id)sharedSearcherFactory;
-(id)init;
-(id)initWithServiceProvider:(id)arg0 ;
-(id)makeSearcherForUserId:(id)arg0 prewarm:(BOOL)arg1 ;


@end


#endif
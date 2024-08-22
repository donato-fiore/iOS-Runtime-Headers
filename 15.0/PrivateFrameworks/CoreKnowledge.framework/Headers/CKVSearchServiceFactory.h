// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSEARCHSERVICEFACTORY_H
#define CKVSEARCHSERVICEFACTORY_H

@class NSString;
@protocol CKVSearchServiceProvider, CKVDatabaseSearcherProvider, CKVSpanMatcherProvider;


#import "CKVServiceFactory.h"

@interface CKVSearchServiceFactory : CKVServiceFactory <CKVSearchServiceProvider>

 {
    NSObject<CKVDatabaseSearcherProvider> *_databaseSearcherProvider;
    NSObject<CKVSpanMatcherProvider> *_spanMatcherProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 ;
-(id)searchService;


@end


#endif
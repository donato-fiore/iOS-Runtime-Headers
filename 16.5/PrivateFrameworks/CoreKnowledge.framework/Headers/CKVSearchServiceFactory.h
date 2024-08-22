// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSEARCHSERVICEFACTORY_H
#define CKVSEARCHSERVICEFACTORY_H

@class NSString;
@protocol CKVSearchServiceProvider, CKVDatabaseSearcherProvider;

#import <Foundation/Foundation.h>

#import "CKVSpanMatcherFactory.h"

@interface CKVSearchServiceFactory : NSObject <CKVSearchServiceProvider>

 {
    NSObject<CKVDatabaseSearcherProvider> *_databaseSearcherProvider;
    CKVSpanMatcherFactory *_spanMatcherProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;
-(id)searchServiceWithUserId:(id)arg0 ;


@end


#endif
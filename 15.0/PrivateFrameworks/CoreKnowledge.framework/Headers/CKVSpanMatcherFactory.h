// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHERFACTORY_H
#define CKVSPANMATCHERFACTORY_H

@class NSString;
@protocol CKVSpanMatcherProvider, CKVSpanMatchSearchIndexProvider, CKVSpanMatchResultInterpreterProvider;

#import <Foundation/Foundation.h>


@interface CKVSpanMatcherFactory : NSObject <CKVSpanMatcherProvider>

 {
    NSObject<CKVSpanMatchSearchIndexProvider> *_searchIndexProvider;
    NSObject<CKVSpanMatchResultInterpreterProvider> *_interpreterProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;
-(id)makeSpanMatcher;


@end


#endif
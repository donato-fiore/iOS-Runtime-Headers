// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVCONTAINERQUERYTASK_H
#define COREDAVCONTAINERQUERYTASK_H

@class NSSet, NSString;
@protocol CoreDAVContainerQueryTaskDelegate;


#import "CoreDAVTask.h"

@interface CoreDAVContainerQueryTask : CoreDAVTask {
    NSSet *_searchTerms;
    NSUInteger _searchLimit;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificQueryCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}


@property (weak, nonatomic) NSObject<CoreDAVContainerQueryTaskDelegate> *delegate;


+(id)_copySearchTermsFromSearchString:(id)arg0 ;
-(id)_initWithSearchTerms:(id)arg0 searchLimit:(NSUInteger)arg1 atURL:(id)arg2 appSpecificDataItemClass:(Class)arg3 ;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)httpMethod;
-(id)initWithSearchString:(id)arg0 searchLimit:(NSUInteger)arg1 atURL:(id)arg2 appSpecificDataItemClass:(Class)arg3 ;
-(id)initWithSearchTerms:(id)arg0 searchLimit:(NSUInteger)arg1 atURL:(id)arg2 appSpecificDataItemClass:(Class)arg3 ;
-(id)requestBody;
-(void)addFiltersToXMLData:(id)arg0 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif
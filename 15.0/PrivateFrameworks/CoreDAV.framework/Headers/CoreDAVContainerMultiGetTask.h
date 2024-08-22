// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVCONTAINERMULTIGETTASK_H
#define COREDAVCONTAINERMULTIGETTASK_H

@class NSSet, NSString, NSError;
@protocol CoreDAVContainerMultiGetSubmittable, CoreDAVAccountInfoProvider, CoreDAVTaskManager;


#import "CoreDAVTask.h"

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable>

 {
    NSSet *_urls;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}


@property (nonatomic) NSObject<CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (retain, nonatomic) NSSet *additionalPropElements; // ivar: _additionalPropElements
@property (copy, nonatomic) id *completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *deletedURLs; // ivar: _deletedURLs
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *missingURLs; // ivar: _missingURLs
@property (readonly, nonatomic) NSSet *parsedContents; // ivar: _parsedContents
@property (nonatomic) BOOL shouldIgnoreResponseErrors; // ivar: _shouldIgnoreResponseErrors
@property (readonly) Class superclass;
@property (nonatomic) NSObject<CoreDAVTaskManager> *taskManager;
@property (nonatomic) CGFloat timeoutInterval;


-(id)copyAdditionalPropElements;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)httpMethod;
-(id)initWithURLs:(id)arg0 atContainerURL:(id)arg1 appSpecificDataItemClass:(Class)arg2 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;
-(void)setAdditionalProperties:(id)arg0 onDataItem:(id)arg1 ;


@end


#endif
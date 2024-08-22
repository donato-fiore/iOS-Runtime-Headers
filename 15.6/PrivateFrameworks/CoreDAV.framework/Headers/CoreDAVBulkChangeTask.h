// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVBULKCHANGETASK_H
#define COREDAVBULKCHANGETASK_H

@class NSString, NSData, NSSet, NSDictionary;


#import "CoreDAVTask.h"

@interface CoreDAVBulkChangeTask : CoreDAVTask {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSString *_checkCTag;
    BOOL _simple;
    BOOL _returnChangedData;
    NSData *_pushedData;
    BOOL _validCTag;
    NSString *_requestDataContentType;
}


@property (readonly, nonatomic) NSSet *bulkChangeResponses; // ivar: _bulkChangeResponses
@property (readonly, nonatomic) NSDictionary *hrefsToModDeleteActions; // ivar: _hrefsToModDeleteActions
@property (readonly, nonatomic) NSString *nextCTag; // ivar: _nextCTag
@property (readonly, nonatomic) NSDictionary *uuidsToAddActions; // ivar: _uuidsToAddActions


-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)httpMethod;
-(id)initWithURL:(id)arg0 checkCTag:(id)arg1 simple:(BOOL)arg2 returnChangedData:(BOOL)arg3 uuidsToAddActions:(id)arg4 hrefsToModDeleteActions:(id)arg5 ;
-(id)requestBody;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg0 hrefsToModDeleteActions:(id)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif
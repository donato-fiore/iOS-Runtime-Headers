// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVMULTIPUTTASK_H
#define COREDAVMULTIPUTTASK_H

@class NSString, NSDictionary;


#import "CoreDAVTask.h"
#import "CoreDAVXMLData.h"

@interface CoreDAVMultiPutTask : CoreDAVTask {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSString *_checkCTag;
    CoreDAVXMLData *_pushedData;
    BOOL _validCTag;
}


@property (readonly, nonatomic) NSDictionary *hrefToETag; // ivar: _hrefToETag
@property (readonly, nonatomic) NSDictionary *hrefToErrorItems; // ivar: _hrefToErrorItems
@property (readonly, nonatomic) NSDictionary *hrefToStatus; // ivar: _hrefToStatus
@property (readonly, nonatomic) NSString *nextCTag; // ivar: _nextCTag
@property (readonly, nonatomic) NSDictionary *uuidToErrorItems; // ivar: _uuidToErrorItems
@property (readonly, nonatomic) NSDictionary *uuidToHREF; // ivar: _uuidToHREF
@property (readonly, nonatomic) NSDictionary *uuidToStatus; // ivar: _uuidToStatus


-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)httpMethod;
-(id)initWithURL:(id)arg0 checkCTag:(id)arg1 uuidsToAddActions:(id)arg2 hrefsToModDeleteActions:(id)arg3 ;
-(id)requestBody;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg0 hrefsToModDeleteActions:(id)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif
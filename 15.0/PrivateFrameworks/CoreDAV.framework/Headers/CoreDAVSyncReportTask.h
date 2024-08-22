// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVSYNCREPORTTASK_H
#define COREDAVSYNCREPORTTASK_H

@class NSString;


#import "CoreDAVPropertyFindBaseTask.h"

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask

@property (readonly, nonatomic) BOOL moreToSync; // ivar: _moreToSync
@property (readonly, nonatomic) NSString *nextSyncToken; // ivar: _nextSyncToken
@property (readonly, nonatomic) NSString *previousSyncToken; // ivar: _previousSyncToken
@property (readonly, nonatomic) BOOL wasInvalidSyncToken; // ivar: _wasInvalidSyncToken


-(BOOL)hadUnexpectedChangeOfSyncTokenWithZeroResponses;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)description;
-(id)httpMethod;
-(id)initWithPropertiesToFind:(id)arg0 atURL:(id)arg1 withDepth:(int)arg2 previousSyncToken:(id)arg3 ;
-(id)notFoundHREFs;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSETTINGSTASK_H
#define ASSETTINGSTASK_H

@class NSArray, DASettingsRequestParams, NSDictionary;


#import "ASTask.h"

@interface ASSettingsTask : ASTask

@property (retain, nonatomic) NSArray *getters; // ivar: _getters
@property (nonatomic) int key; // ivar: _key
@property (retain, nonatomic) DASettingsRequestParams *requestParams; // ivar: _requestParams
@property (retain, nonatomic) id *result; // ivar: _result
@property (retain, nonatomic) NSDictionary *setters; // ivar: _setters
@property (nonatomic) NSInteger status; // ivar: _status


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)init;
-(id)requestBody;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;


@end


#endif
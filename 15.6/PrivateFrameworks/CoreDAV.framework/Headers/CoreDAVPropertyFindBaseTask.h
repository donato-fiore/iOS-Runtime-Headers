// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVPROPERTYFINDBASETASK_H
#define COREDAVPROPERTYFINDBASETASK_H

@class NSSet;


#import "CoreDAVTask.h"
#import "CoreDAVMultiStatusItem.h"

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus; // ivar: _multiStatus
@property (retain, nonatomic) NSSet *propertiesToFind; // ivar: _propertiesToFind


-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)description;
-(id)getTotalFailureError;
-(id)initWithPropertiesToFind:(id)arg0 atURL:(id)arg1 ;
-(id)parseHints;
-(id)successfulValueForNameSpace:(id)arg0 elementName:(id)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;
-(void)updateMultiStatusFromResponse;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVEXPANDPROPERTIESTASK_H
#define COREDAVEXPANDPROPERTIESTASK_H

@class NSMutableSet;


#import "CoreDAVPropertyFindBaseTask.h"

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSMutableSet *propertiesToExpand; // ivar: _propertiesToExpand


-(id)description;
-(id)httpMethod;
-(id)initWithPropertiesToFind:(id)arg0 atURL:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(id)parseHints;
-(id)requestBody;
-(void)addPropertyToExpandWithPropertiesToFind:(id)arg0 expandedName:(id)arg1 expandedNameSpace:(id)arg2 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif
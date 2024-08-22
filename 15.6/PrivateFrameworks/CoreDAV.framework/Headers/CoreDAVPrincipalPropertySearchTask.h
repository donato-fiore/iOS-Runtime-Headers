// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVPRINCIPALPROPERTYSEARCHTASK_H
#define COREDAVPRINCIPALPROPERTYSEARCHTASK_H

@class NSDictionary, NSSet;


#import "CoreDAVPropertyFindBaseTask.h"

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask

@property (nonatomic) BOOL applyToPrincipalCollectionSet; // ivar: _applyToPrincipalCollectionSet
@property (retain, nonatomic) NSDictionary *extraAttributes; // ivar: _extraAttributes
@property (retain, nonatomic) NSSet *searchItems; // ivar: _searchItems


-(id)httpMethod;
-(id)initWithPropertiesToFind:(id)arg0 atURL:(id)arg1 ;
-(id)initWithPropertySearches:(id)arg0 propertiesToFind:(id)arg1 atURL:(id)arg2 applyToPrincipalCollectionSet:(BOOL)arg3 extraAttributes:(id)arg4 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif
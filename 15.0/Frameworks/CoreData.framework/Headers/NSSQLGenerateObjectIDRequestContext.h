// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLGENERATEOBJECTIDREQUESTCONTEXT_H
#define NSSQLGENERATEOBJECTIDREQUESTCONTEXT_H

@class NSDictionary;


#import "NSSQLStoreRequestContext.h"
#import "NSSQLModel.h"

@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext {
    NSDictionary *_entitiesAndCounts;
    NSSQLModel *_model;
}




-(BOOL)executeRequestCore:(*id)arg0 ;
-(BOOL)isWritingRequest;
-(id)initForEntitiesAndCounts:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;
-(void)dealloc;


@end


#endif
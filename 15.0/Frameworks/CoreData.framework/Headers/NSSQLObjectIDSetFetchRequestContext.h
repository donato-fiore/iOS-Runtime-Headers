// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLOBJECTIDSETFETCHREQUESTCONTEXT_H
#define NSSQLOBJECTIDSETFETCHREQUESTCONTEXT_H

@class NSArray, NSString;


#import "NSSQLFetchRequestContext.h"

@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {
    NSArray *_idSets;
    NSString *_columnName;
}




-(BOOL)executeRequestCore:(*id)arg0 ;
-(id)initWithRequest:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 idSets:(id)arg3 columnName:(id)arg4 ;
-(void)dealloc;
-(void)executeEpilogue;


@end


#endif
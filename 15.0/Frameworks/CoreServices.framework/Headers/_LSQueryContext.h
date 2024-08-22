// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSQUERYCONTEXT_H
#define _LSQUERYCONTEXT_H

@protocol _LSQueryResolving;

#import <Foundation/Foundation.h>


@interface _LSQueryContext : NSObject {
    id *_resolver;
}


@property (readonly) NSObject<_LSQueryResolving> *_resolver;


+(BOOL)simulateLimitedMappingForXCTests;
+(id)defaultContext;
+(void)setSimulateLimitedMappingForXCTests:(BOOL)arg0 ;
-(id)_init;
-(id)_resolveQueries:(id)arg0 XPCConnection:(id)arg1 error:(*id)arg2 ;
-(id)debugDescription;
-(id)init;
-(id)resolveQueries:(id)arg0 error:(*id)arg1 ;
-(void)clearCaches;
-(void)enumerateResolvedResultsOfQuery:(id)arg0 withBlock:(id)arg1 ;


@end


#endif
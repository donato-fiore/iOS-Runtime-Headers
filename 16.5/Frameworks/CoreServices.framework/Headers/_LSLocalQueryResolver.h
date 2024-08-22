// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSLOCALQUERYRESOLVER_H
#define _LSLOCALQUERYRESOLVER_H

@class NSString;
@protocol _LSQueryResolving;

#import <Foundation/Foundation.h>


@interface _LSLocalQueryResolver : NSObject <_LSQueryResolving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_resolveQueries:(id)arg0 XPCConnection:(id)arg1 error:(*id)arg2 ;
-(void)_enumerateResolvedResultsOfQuery:(id)arg0 XPCConnection:(id)arg1 withBlock:(id)arg2 ;


@end


#endif
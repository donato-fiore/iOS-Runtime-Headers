// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCONTEXTPROTOSPANMATCHER_H
#define CDMCONTEXTPROTOSPANMATCHER_H

@class NSString;
@protocol CDMDependentSpanMatcherProto;

#import <Foundation/Foundation.h>


@interface CDMContextProtoSpanMatcher : NSObject <CDMDependentSpanMatcherProto>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)convertUserDialogAct:(id)arg0 ;
-(id)createQueryFromSpan:(id)arg0 ;
-(id)extractEntityNamesFromNLContext:(id)arg0 ;
-(id)extractPrimitiveStringsFromDialogAct:(id)arg0 ;
-(id)extractPrimitiveStringsFromUSOGraphs:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)matchSpanFromSpans:(id)arg0 inTrie:(id)arg1 ;
-(id)matchSpansForTokenChain:(id)arg0 withNLContext:(id)arg1 withPreviousMatchedSpans:(id)arg2 ;


@end


#endif
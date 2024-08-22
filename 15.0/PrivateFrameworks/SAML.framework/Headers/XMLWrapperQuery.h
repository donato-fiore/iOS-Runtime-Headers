// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XMLWRAPPERQUERY_H
#define XMLWRAPPERQUERY_H


#import <Foundation/Foundation.h>


@interface XMLWrapperQuery : NSObject



+(void)initialize;
-(?)elementForNode;
-(?)executeXpathQuery:(?)arg0 query:(?)arg1 ctxNodeerror;
-(?)searchNodeWithXpathQuery:(?)arg0 queryerror;
-(BOOL)registerXpathNamespacesForCtx:(struct _xmlXPathContext *)arg0 error:(*id)arg1 ;
-(void)registerNamespace:(id)arg0 ;


@end


#endif
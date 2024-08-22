// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXMLXPATHCONTEXT_H
#define POXMLXPATHCONTEXT_H


#import <Foundation/Foundation.h>

#import "POXMLContext.h"

@interface POXMLXPathContext : NSObject

@property (retain, nonatomic) POXMLContext *xmldocContext; // ivar: _xmldocContext
@property (nonatomic) *_xmlXPathContext xpathCtx; // ivar: _xpathCtx


-(BOOL)registerNamespaces:(id)arg0 ;
-(id)evaluateXPath:(id)arg0 ;
-(id)initWithXMLContext:(id)arg0 ;
-(void)dealloc;


@end


#endif
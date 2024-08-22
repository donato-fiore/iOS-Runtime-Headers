// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXMLXPATHRESULT_H
#define POXMLXPATHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "POXMLXPathContext.h"

@interface POXMLXPathResult : NSObject

@property (retain, nonatomic) NSArray *nodes;
@property (retain, nonatomic) POXMLXPathContext *xpathContext; // ivar: _xpathContext
@property (nonatomic) *_xmlXPathObject xpathObj; // ivar: _xpathObj


-(id)init;
-(int)nodeCount;
-(void)dealloc;


@end


#endif
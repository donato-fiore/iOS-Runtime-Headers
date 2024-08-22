// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXMLNODE_H
#define POXMLNODE_H


#import <Foundation/Foundation.h>

#import "POXMLXPathResult.h"

@interface POXMLNode : NSObject

@property (nonatomic) *_xmlNode node; // ivar: _node
@property (retain, nonatomic) POXMLXPathResult *xpathResultSet; // ivar: _xpathResultSet


-(id)content;
-(id)evaluateXPath:(id)arg0 ;
-(id)init;
-(id)parent;
-(id)rawXMLString;
-(id)valueForProperty:(id)arg0 ;


@end


#endif
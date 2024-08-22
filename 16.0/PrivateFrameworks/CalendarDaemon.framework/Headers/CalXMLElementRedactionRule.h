// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALXMLELEMENTREDACTIONRULE_H
#define CALXMLELEMENTREDACTIONRULE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CalXMLElementRedactionRule : NSObject

@property (retain) NSDictionary *attributes; // ivar: _attributes
@property int cdata; // ivar: _cdata
@property int content; // ivar: _content
@property int elementName; // ivar: _elementName


-(id)redactionRuleForAttribute:(id)arg0 ;


@end


#endif
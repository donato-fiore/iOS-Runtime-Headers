// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKDOMELEMENT_H
#define WKDOMELEMENT_H

@class NSString;


#import "WKDOMNode.h"

@interface WKDOMElement : WKDOMNode

@property (readonly) NSString *tagName;


-(BOOL)hasAttribute:(id)arg0 ;
-(id)getAttribute:(id)arg0 ;
-(void)setAttribute:(id)arg0 value:(id)arg1 ;


@end


#endif
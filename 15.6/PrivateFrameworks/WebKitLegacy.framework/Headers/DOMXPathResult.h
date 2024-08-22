// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMXPATHRESULT_H
#define DOMXPATHRESULT_H

@class NSString;


#import "DOMObject.h"
#import "DOMNode.h"

@interface DOMXPathResult : DOMObject

@property (readonly) BOOL booleanValue;
@property (readonly) BOOL invalidIteratorState;
@property (readonly) CGFloat numberValue;
@property (readonly) unsigned short resultType;
@property (readonly) DOMNode *singleNodeValue;
@property (readonly) unsigned int snapshotLength;
@property (readonly, copy) NSString *stringValue;


-(id)iterateNext;
-(id)snapshotItem:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMENTITY_H
#define DOMENTITY_H

@class NSString;


#import "DOMNode.h"

@interface DOMEntity : DOMNode

@property (readonly, copy) NSString *notationName;
@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;




@end


#endif
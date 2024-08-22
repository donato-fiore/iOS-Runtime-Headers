// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMDOCUMENTTYPE_H
#define DOMDOCUMENTTYPE_H

@class NSString;


#import "DOMNode.h"
#import "DOMNamedNodeMap.h"

@interface DOMDocumentType : DOMNode

@property (readonly) DOMNamedNodeMap *entities;
@property (readonly, copy) NSString *internalSubset;
@property (readonly, copy) NSString *name;
@property (readonly) DOMNamedNodeMap *notations;
@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;


-(void)remove;


@end


#endif
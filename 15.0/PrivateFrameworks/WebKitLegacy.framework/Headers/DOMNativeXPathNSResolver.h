// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMNATIVEXPATHNSRESOLVER_H
#define DOMNATIVEXPATHNSRESOLVER_H

@class NSString;
@protocol DOMXPathNSResolver;


#import "DOMObject.h"

@interface DOMNativeXPathNSResolver : DOMObject <DOMXPathNSResolver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)lookupNamespaceURI:(id)arg0 ;
-(void)dealloc;


@end


#endif
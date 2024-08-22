// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ONOXPATHENUMERATOR_H
#define ONOXPATHENUMERATOR_H

@class NSEnumerator;
@protocol NSFastEnumeration;


#import "ONOXMLDocument.h"

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration>



@property (nonatomic) NSUInteger cursor; // ivar: _cursor
@property (retain, nonatomic) ONOXMLDocument *document; // ivar: _document
@property (nonatomic) *_xmlXPathObject xmlXPath; // ivar: _xmlXPath


-(id)allObjects;
-(id)nextObject;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OIXMLDOCUMENT_H
#define OIXMLDOCUMENT_H

@class NSString;


#import "OIXMLNode.h"
#import "OIXMLElement.h"

@interface OIXMLDocument : OIXMLNode

@property (copy) NSString *characterEncoding; // ivar: _encoding
@property (retain) OIXMLElement *rootElement; // ivar: _rootElement
@property (copy) NSString *version; // ivar: _version


-(id)XMLString;
-(id)closingTagString;
-(id)contentString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createMutableXMLString;
-(id)description;
-(id)initWithRootElement:(id)arg0 ;
-(id)openingTagString;


@end


#endif
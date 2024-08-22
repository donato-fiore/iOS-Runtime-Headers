// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKXMLEXTRACTORELEMENT_H
#define _HKXMLEXTRACTORELEMENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _HKXMLExtractorElement : NSObject

@property (readonly, copy) NSDictionary *specificationAttributes; // ivar: _specificationAttributes
@property (readonly, copy) NSString *specificationElement; // ivar: _specificationElement


-(BOOL)matchesElement:(id)arg0 ;
-(id)initWithElementName:(id)arg0 attributes:(id)arg1 ;
-(id)initWithTagSpecification:(id)arg0 ;


@end


#endif
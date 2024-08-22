// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKXMLEXTRACTORSPECIFICATION_H
#define _HKXMLEXTRACTORSPECIFICATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _HKXMLExtractorSpecification : NSObject

@property (readonly, copy) NSArray *specificationElements; // ivar: _specificationElements
@property (readonly, copy) NSString *specificationString; // ivar: _specificationString


-(BOOL)matchesElementStack:(id)arg0 ;
-(id)initWithSpecificationString:(id)arg0 ;


@end


#endif
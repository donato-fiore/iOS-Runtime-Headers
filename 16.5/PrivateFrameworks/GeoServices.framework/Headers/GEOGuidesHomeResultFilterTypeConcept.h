// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGUIDESHOMERESULTFILTERTYPECONCEPT_H
#define GEOGUIDESHOMERESULTFILTERTYPECONCEPT_H


#import <Foundation/Foundation.h>

#import "GEOPDGuidesHomeResultFilterTypeConcept.h"
#import "GEORelatedSearchSuggestion.h"

@interface GEOGuidesHomeResultFilterTypeConcept : NSObject

@property (readonly, nonatomic) GEOPDGuidesHomeResultFilterTypeConcept *conceptFilter; // ivar: _conceptFilter
@property (readonly, nonatomic) GEORelatedSearchSuggestion *searchSuggestion;


-(id)initWithGuidesHomeResultFilterTypeConcept:(id)arg0 ;


@end


#endif
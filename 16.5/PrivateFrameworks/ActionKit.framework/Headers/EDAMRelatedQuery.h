// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMRELATEDQUERY_H
#define EDAMRELATEDQUERY_H

@class NSString;


#import "FATObject.h"
#import "EDAMNoteFilter.h"

@interface EDAMRelatedQuery : FATObject

@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) EDAMNoteFilter *filter; // ivar: _filter
@property (retain, nonatomic) NSString *noteGuid; // ivar: _noteGuid
@property (retain, nonatomic) NSString *plainText; // ivar: _plainText
@property (retain, nonatomic) NSString *referenceUri; // ivar: _referenceUri


+(id)structFields;
+(id)structName;


@end


#endif
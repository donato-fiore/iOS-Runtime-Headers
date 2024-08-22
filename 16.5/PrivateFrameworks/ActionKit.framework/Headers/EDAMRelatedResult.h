// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMRELATEDRESULT_H
#define EDAMRELATEDRESULT_H

@class NSNumber, NSString, NSArray;


#import "FATObject.h"

@interface EDAMRelatedResult : FATObject

@property (retain, nonatomic) NSNumber *cacheExpires; // ivar: _cacheExpires
@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSArray *containingNotebooks; // ivar: _containingNotebooks
@property (retain, nonatomic) NSString *debugInfo; // ivar: _debugInfo
@property (retain, nonatomic) NSArray *experts; // ivar: _experts
@property (retain, nonatomic) NSArray *notebooks; // ivar: _notebooks
@property (retain, nonatomic) NSArray *notes; // ivar: _notes
@property (retain, nonatomic) NSArray *relatedContent; // ivar: _relatedContent
@property (retain, nonatomic) NSArray *tags; // ivar: _tags


+(id)structFields;
+(id)structName;


@end


#endif
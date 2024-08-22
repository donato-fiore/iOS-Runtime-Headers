// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMRELATEDRESULTSPEC_H
#define EDAMRELATEDRESULTSPEC_H

@class NSNumber, NSSet;


#import "FATObject.h"

@interface EDAMRelatedResultSpec : FATObject

@property (retain, nonatomic) NSNumber *includeContainingNotebooks; // ivar: _includeContainingNotebooks
@property (retain, nonatomic) NSNumber *includeDebugInfo; // ivar: _includeDebugInfo
@property (retain, nonatomic) NSNumber *maxExperts; // ivar: _maxExperts
@property (retain, nonatomic) NSNumber *maxNotebooks; // ivar: _maxNotebooks
@property (retain, nonatomic) NSNumber *maxNotes; // ivar: _maxNotes
@property (retain, nonatomic) NSNumber *maxRelatedContent; // ivar: _maxRelatedContent
@property (retain, nonatomic) NSNumber *maxTags; // ivar: _maxTags
@property (retain, nonatomic) NSSet *relatedContentTypes; // ivar: _relatedContentTypes
@property (retain, nonatomic) NSNumber *writableNotebooksOnly; // ivar: _writableNotebooksOnly


+(id)structFields;
+(id)structName;


@end


#endif
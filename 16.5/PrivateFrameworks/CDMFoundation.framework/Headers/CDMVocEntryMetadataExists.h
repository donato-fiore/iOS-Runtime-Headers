// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMVOCENTRYMETADATAEXISTS_H
#define CDMVOCENTRYMETADATAEXISTS_H

@class NSArray;


#import "CDMVocEntryMetadata.h"

@interface CDMVocEntryMetadataExists : CDMVocEntryMetadata

@property (readonly, nonatomic) NSInteger constraintType; // ivar: _constraintType
@property (readonly, nonatomic) NSArray *values; // ivar: _values


-(void)parseChunks:(id)arg0 ;


@end


#endif
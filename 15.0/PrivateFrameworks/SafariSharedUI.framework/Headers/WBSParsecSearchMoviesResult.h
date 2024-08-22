// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPARSECSEARCHMOVIESRESULT_H
#define WBSPARSECSEARCHMOVIESRESULT_H

@class NSMutableArray, NSString;


#import "WBSParsecLegacySearchResult.h"

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult {
    NSMutableArray *_posterRepresentations;
}


@property (readonly, nonatomic) NSString *descriptionLeadInText; // ivar: _descriptionLeadInText


-(id)initWithDictionary:(id)arg0 ;
-(id)postersWithSession:(id)arg0 ;


@end


#endif
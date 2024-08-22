// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPARSECSPORTSSCORESUMMARY_H
#define WBSPARSECSPORTSSCORESUMMARY_H

@class WBSParsecModel, NSArray, NSString;



@interface WBSParsecSportsScoreSummary : WBSParsecModel

@property (readonly, copy, nonatomic) NSArray *images; // ivar: _images
@property (readonly, copy, nonatomic) NSArray *scores; // ivar: _scores
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle


+(id)schema;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif
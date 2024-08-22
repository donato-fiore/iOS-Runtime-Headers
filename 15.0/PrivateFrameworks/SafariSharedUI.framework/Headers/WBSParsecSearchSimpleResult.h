// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPARSECSEARCHSIMPLERESULT_H
#define WBSPARSECSEARCHSIMPLERESULT_H

@class NSArray, NSString, NSNumber;
@protocol WBSParsecSearchSimpleResult, WBSParsecSearchSession;


#import "WBSParsecLegacySearchResult.h"
#import "WBSParsecImageRepresentation.h"
#import "WBSParsecSearchMapsResultFeedbackSender.h"

@interface WBSParsecSearchSimpleResult : WBSParsecLegacySearchResult <WBSParsecSearchSimpleResult>

 {
    WBSParsecImageRepresentation *_titleGlyph;
    NSArray *_moreIconRepresentations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionLeadInText; // ivar: _descriptionLeadInText
@property (readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines; // ivar: _descriptionMaximumNumberOfLines
@property (readonly, nonatomic) BOOL descriptionTextCanWrap; // ivar: _descriptionTextCanWrap
@property (readonly, nonatomic) NSString *footnote; // ivar: _footnote
@property (readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle; // ivar: _hasSingleLineDescriptionAndTitle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender; // ivar: _mapsFeedbackSender
@property (retain, nonatomic) NSObject<WBSParsecSearchSession> *parsecSearchSession; // ivar: _parsecSearchSession
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *titleMaximumNumberOfLines; // ivar: _titleMaximumNumberOfLines


-(id)initWithDictionary:(id)arg0 ;
-(id)titleGlyphWithSession:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECSEARCHGENERICRESULT_H
#define WBSPARSECSEARCHGENERICRESULT_H

@class NSArray, NSString, NSNumber;
@protocol WBSParsecSearchGenericResult;


#import "WBSParsecLegacySearchResult.h"
#import "WBSParsecActionButton.h"
#import "WBSParsecAuxiliaryInfo.h"
#import "WBSParsecImageRepresentation.h"

@interface WBSParsecSearchGenericResult : WBSParsecLegacySearchResult <WBSParsecSearchGenericResult>

 {
    WBSParsecActionButton *_actionButton;
}


@property (readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo; // ivar: _auxiliaryInfo
@property (readonly, copy, nonatomic) NSArray *descriptionRichTexts; // ivar: _descriptionRichTexts
@property (readonly, copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (readonly, copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph; // ivar: _secondaryTitleGlyph
@property (readonly, nonatomic) WBSParsecImageRepresentation *thumbnail; // ivar: _thumbnail
@property (readonly, nonatomic) NSNumber *titleMaximumLines; // ivar: _titleMaximumLines


+(id)_specializedSchema;
-(id)actionButton;
-(id)initWithDictionary:(id)arg0 ;
-(id)thumbnailWithSession:(id)arg0 ;


@end


#endif
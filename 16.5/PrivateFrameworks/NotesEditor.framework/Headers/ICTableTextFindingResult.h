// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLETEXTFINDINGRESULT_H
#define ICTABLETEXTFINDINGRESULT_H

@class ICAttachment, NSNumber, NSAttributedString, NSString;


#import "ICTextFindingResult.h"

@interface ICTableTextFindingResult : ICTextFindingResult

@property (weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) NSNumber *cellStartRangeLocation; // ivar: _cellStartRangeLocation
@property (retain, nonatomic) NSNumber *columnNumber; // ivar: _columnNumber
@property (retain, nonatomic) NSAttributedString *findableString; // ivar: _findableString
@property (nonatomic) BOOL ignoreCase; // ivar: _ignoreCase
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (nonatomic) _NSRange rangeInFindableString; // ivar: _rangeInFindableString
@property (retain, nonatomic) NSNumber *rowNumber; // ivar: _rowNumber


-(NSInteger)compare:(id)arg0 ;
-(id)framesForHighlightInTextView:(id)arg0 ;
-(id)tableAttachmentViewControllerForTextView:(id)arg0 ;
-(id)viewForHighlightsInTextView:(id)arg0 ;


@end


#endif
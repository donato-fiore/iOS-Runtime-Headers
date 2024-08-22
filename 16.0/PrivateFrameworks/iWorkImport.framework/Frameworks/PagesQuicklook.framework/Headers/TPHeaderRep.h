// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPHEADERREP_H
#define TPHEADERREP_H

@class TSWPHeaderRep, NSTimer;


#import "TPPaginatedPageInfo.h"

@interface TPHeaderRep : TSWPHeaderRep

@property (retain, nonatomic) NSTimer *editingDidBeginTimer; // ivar: editingDidBeginTimer
@property (nonatomic) BOOL hideKnobs; // ivar: _hideKnobs
@property (readonly, nonatomic) TPPaginatedPageInfo *pageInfo;


-(BOOL)p_isInDocumentSetup;
-(BOOL)p_isMiddleFooterRep;
-(BOOL)p_isMiddleHeaderRep;
-(BOOL)p_shouldCreateArrowKnobs;
-(id)pageLayout;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHTEXTINPUTQUERY_H
#define CHTEXTINPUTQUERY_H

@class NSArray;
@protocol CHTextInputQueryTargetDataSource;


#import "CHQuery.h"

@interface CHTextInputQuery : CHQuery

@property (copy, nonatomic, setter=_setAvailableItems:) NSArray *availableItems; // ivar: _availableItems
@property (weak) NSObject<CHTextInputQueryTargetDataSource> *textInputTargetsDataSource; // ivar: _textInputTargetsDataSource
@property (nonatomic) CGFloat totalDuration; // ivar: _totalDuration


+(id)queryItemStableIdentifierForStrokeGroup:(id)arg0 ;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg0 ;
-(id)q_textInputItemsFromSessionResult:(id)arg0 ;
-(void)dealloc;
-(void)q_updateQueryResult;


@end


#endif
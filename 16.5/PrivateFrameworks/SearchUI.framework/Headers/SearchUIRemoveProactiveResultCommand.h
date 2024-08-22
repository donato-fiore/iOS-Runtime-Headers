// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIREMOVEPROACTIVERESULTCOMMAND_H
#define SEARCHUIREMOVEPROACTIVERESULTCOMMAND_H

@class SFCommand, SFSearchResult;



@interface SearchUIRemoveProactiveResultCommand : SFCommand

@property (readonly, weak, nonatomic) SFSearchResult *interactionResult; // ivar: _interactionResult
@property (readonly, nonatomic) int type; // ivar: _type


-(id)initWithInteractionResult:(id)arg0 ofType:(int)arg1 ;


@end


#endif
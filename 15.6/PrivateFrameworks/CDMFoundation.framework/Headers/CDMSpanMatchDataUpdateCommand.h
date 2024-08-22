// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSPANMATCHDATAUPDATECOMMAND_H
#define CDMSPANMATCHDATAUPDATECOMMAND_H

@class CKVocabularySearcher;


#import "CDMBaseCommand.h"

@interface CDMSpanMatchDataUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) CKVocabularySearcher *searcher; // ivar: _searcher


-(id)commandName;
-(id)initWithSearcher:(id)arg0 ;


@end


#endif
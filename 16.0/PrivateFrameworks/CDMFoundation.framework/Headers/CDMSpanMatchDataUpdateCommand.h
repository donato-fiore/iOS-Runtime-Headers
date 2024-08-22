// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMSPANMATCHDATAUPDATECOMMAND_H
#define CDMSPANMATCHDATAUPDATECOMMAND_H

@class CKVocabularySearcher, NSString;


#import "CDMBaseCommand.h"

@interface CDMSpanMatchDataUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) CKVocabularySearcher *searcher; // ivar: _searcher
@property (readonly, nonatomic) NSString *userId; // ivar: _userId


-(id)commandName;
-(id)initWithUserId:(id)arg0 ;


@end


#endif
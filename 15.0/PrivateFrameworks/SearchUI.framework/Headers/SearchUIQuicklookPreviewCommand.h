// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIQUICKLOOKPREVIEWCOMMAND_H
#define SEARCHUIQUICKLOOKPREVIEWCOMMAND_H



#import "SearchUIPeekCommand.h"

@interface SearchUIQuicklookPreviewCommand : SearchUIPeekCommand



+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)itemForRowModel:(id)arg0 environment:(id)arg1 ;
-(id)generateViewController;


@end


#endif
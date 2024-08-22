// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISAFARIPREVIEWPEEKCOMMAND_H
#define SEARCHUISAFARIPREVIEWPEEKCOMMAND_H



#import "SearchUIPeekCommand.h"

@interface SearchUISafariPreviewPeekCommand : SearchUIPeekCommand



+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)firstSafariPreviewableUrlFromURLs:(id)arg0 ;
-(id)generateViewController;


@end


#endif
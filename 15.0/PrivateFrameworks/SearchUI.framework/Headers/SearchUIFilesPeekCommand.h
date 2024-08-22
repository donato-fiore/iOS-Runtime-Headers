// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIFILESPEEKCOMMAND_H
#define SEARCHUIFILESPEEKCOMMAND_H



#import "SearchUIPeekCommand.h"

@interface SearchUIFilesPeekCommand : SearchUIPeekCommand



+(BOOL)canPreviewRowModel:(id)arg0 ;
+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)fileURLForRowModel:(id)arg0 ;
-(BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg0 ;
-(id)generateViewController;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISHOWSTORESHEETHANDLER_H
#define SEARCHUISHOWSTORESHEETHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUIShowStoreSheetHandler : SearchUICommandHandler



+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)prefersModalPresentation;
-(NSUInteger)destination;
-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;


@end


#endif
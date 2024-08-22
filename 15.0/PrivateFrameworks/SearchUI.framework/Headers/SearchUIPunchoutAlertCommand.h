// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIPUNCHOUTALERTCOMMAND_H
#define SEARCHUIPUNCHOUTALERTCOMMAND_H



#import "SearchUITapCommand.h"

@interface SearchUIPunchoutAlertCommand : SearchUITapCommand



+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)pickerPunchoutsForRowModel:(id)arg0 ;
-(BOOL)prefersModalPresentation;
-(NSUInteger)destination;
-(id)setupViewController;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUISFSHOWCONTACTCARDCOMMAND_H
#define SEARCHUISFSHOWCONTACTCARDCOMMAND_H

@class SFShowContactCardCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFShowContactCardCommand : SearchUITapCommand

@property (readonly) SFShowContactCardCommand *command;


+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(NSUInteger)destination;
-(id)setupViewController;
-(id)viewControllerForIdentifier:(id)arg0 isSuggestedContact:(BOOL)arg1 ;


@end


#endif
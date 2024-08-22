// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUISFOPENFILEPROVIDERCOMMAND_H
#define SEARCHUISFOPENFILEPROVIDERCOMMAND_H

@class SFOpenFileProviderItemCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFOpenFileProviderCommand : SearchUITapCommand

@property (readonly) SFOpenFileProviderItemCommand *command;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(NSUInteger)destination;
-(id)coreSpotlightIdentifier;
-(id)fileProviderIdentifier;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif
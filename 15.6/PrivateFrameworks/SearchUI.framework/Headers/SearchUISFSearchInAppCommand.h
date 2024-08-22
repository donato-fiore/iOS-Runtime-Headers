// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFSEARCHINAPPCOMMAND_H
#define SEARCHUISFSEARCHINAPPCOMMAND_H

@class SFSearchInAppCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFSearchInAppCommand : SearchUITapCommand

@property (readonly, nonatomic) SFSearchInAppCommand *command;


+(id)appStoreSearchURLFromQuery:(id)arg0 ;
-(NSUInteger)destination;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISFREQUESTUSERREPORTCOMMAND_H
#define SEARCHUISFREQUESTUSERREPORTCOMMAND_H

@class SFRequestUserReportCommand;


#import "SearchUITapCommand.h"

@interface SearchUISFRequestUserReportCommand : SearchUITapCommand

@property (readonly, nonatomic) SFRequestUserReportCommand *command;


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)prefersModalPresentation;
-(id)setupViewController;
-(id)userReportRequest;


@end


#endif
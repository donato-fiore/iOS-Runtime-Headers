// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIREQUESTUSERREPORTHANDLER_H
#define SEARCHUIREQUESTUSERREPORTHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUIRequestUserReportHandler : SearchUICommandHandler



+(id)createUserReportViewControllerWith:(id)arg0 rowModel:(id)arg1 environment:(id)arg2 ;
+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)prefersContextMenu;
-(BOOL)prefersModalPresentation;
-(NSUInteger)destination;
-(id)contextMenu;
-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;


@end


#endif
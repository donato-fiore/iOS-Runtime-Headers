// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISHAREITEMHANDLER_H
#define SEARCHUISHAREITEMHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUIShareItemHandler : SearchUICommandHandler

@property (retain) SearchUICommandHandler *handlerForSharing; // ivar: _handlerForSharing


-(BOOL)prefersModalPresentation;
-(BOOL)presentShareViewControllerForItem:(id)arg0 ;
-(NSUInteger)destination;
-(id)defaultSymbolName;
-(id)defaultTitle;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif
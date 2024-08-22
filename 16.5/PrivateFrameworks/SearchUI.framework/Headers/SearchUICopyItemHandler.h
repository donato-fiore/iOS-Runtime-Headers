// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICOPYITEMHANDLER_H
#define SEARCHUICOPYITEMHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUICopyItemHandler : SearchUICommandHandler

@property (retain) SearchUICommandHandler *handlerForCopying; // ivar: _handlerForCopying


-(NSUInteger)destination;
-(id)defaultSymbolName;
-(id)defaultTitle;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif
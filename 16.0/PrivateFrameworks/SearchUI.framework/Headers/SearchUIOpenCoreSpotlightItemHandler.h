// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIOPENCORESPOTLIGHTITEMHANDLER_H
#define SEARCHUIOPENCORESPOTLIGHTITEMHANDLER_H

@class SFOpenCoreSpotlightItemCommand;


#import "SearchUIOpenUserActivityHandler.h"

@interface SearchUIOpenCoreSpotlightItemHandler : SearchUIOpenUserActivityHandler

@property (readonly) SFOpenCoreSpotlightItemCommand *command;


-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;
-(void)getUserActivityForCommand:(id)arg0 environment:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif
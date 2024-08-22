// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIOPENPUNCHOUTHANDLER_H
#define SEARCHUIOPENPUNCHOUTHANDLER_H

@class SFOpenPunchoutCommand;


#import "SearchUICommandHandler.h"

@interface SearchUIOpenPunchoutHandler : SearchUICommandHandler

@property (readonly) SFOpenPunchoutCommand *command;


+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)queryItemValueForName:(id)arg0 inURL:(id)arg1 ;
-(BOOL)schemeSupportedForCopyAndShare;
-(BOOL)supportsCopy;
-(BOOL)supportsShare;
-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;
-(id)defaultSymbolName;
-(id)defaultTitle;
-(id)destinationPunchout;
-(id)itemProviderForCopy;
-(id)url;
-(void)fetchShareableURLWithCompletionHandler:(id)arg0 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif
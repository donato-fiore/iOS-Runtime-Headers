// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUILAUNCHAPPHANDLER_H
#define SEARCHUILAUNCHAPPHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUILaunchAppHandler : SearchUICommandHandler



+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
+(void)openApplicationWithBundleIdentifier:(id)arg0 environment:(id)arg1 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif
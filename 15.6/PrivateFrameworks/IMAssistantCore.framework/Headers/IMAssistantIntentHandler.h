// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSISTANTINTENTHANDLER_H
#define IMASSISTANTINTENTHANDLER_H

@class INExtension, NSMutableArray;



@interface IMAssistantIntentHandler : INExtension {
    NSMutableArray *_recentIntentHandlers;
}




-(id)existingHandlerForIntentIdentifier:(id)arg0 ;
-(id)handlerForIntent:(id)arg0 ;
-(id)init;
-(void)updateRecentlyUsedHandlersWithHandler:(id)arg0 ;


@end


#endif
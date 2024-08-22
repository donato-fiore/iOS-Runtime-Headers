// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPQUICKTYPEURLSERVANT_H
#define PPQUICKTYPEURLSERVANT_H

@class TUConversationManager, _PASLock;
@protocol PPQuickTypeServantProtocol;

#import <Foundation/Foundation.h>


@interface PPQuickTypeURLServant : NSObject <PPQuickTypeServantProtocol>

 {
    TUConversationManager *_conversationManager;
    _PASLock *_dataLock;
}




-(id)init;
-(id)initWithConversationManager:(id)arg0 ;
-(id)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 explanationSet:(id)arg2 ;
-(void)registerFeedback:(id)arg0 ;


@end


#endif
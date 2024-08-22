// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKMESSAGECOMPOSITIONMANAGER_H
#define NPKMESSAGECOMPOSITIONMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NPKMessageCompositionManager : NSObject {
    NSString *_listenerID;
}




-(id)init;
-(void)_sendComposition:(id)arg0 toRecipient:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)sendMessage:(id)arg0 withAppExtensionIdentifier:(id)arg1 toRecipient:(id)arg2 completion:(id)arg3 ;


@end


#endif
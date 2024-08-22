// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTSTOREBAGLOADER_H
#define SUSCRIPTSTOREBAGLOADER_H

@class NSDictionary, NSString;
@protocol ISURLBagObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUScriptDictionary.h"

@interface SUScriptStoreBagLoader : NSObject <ISURLBagObserver>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bagDictionary;
    SUScriptDictionary *_scriptStoreBagDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)scriptStoreBagDictionary;
-(void)_updateWithBagDictionary:(id)arg0 allowsPostingBagDidChangeNotification:(BOOL)arg1 ;
-(void)bagDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif
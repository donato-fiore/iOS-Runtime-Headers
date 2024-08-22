// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSTATECAPTUREMANAGER_H
#define RBSTATECAPTUREMANAGER_H

@class NSMutableDictionary, NSString;
@protocol RBStateCaptureManaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBSStateCaptureSet.h"

@interface RBStateCaptureManager : NSObject <RBStateCaptureManaging>

 {
    NSMutableDictionary *_itemsByIdentifier;
    RBSStateCaptureSet *_itemsWithoutIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)identifiers;
-(id)init;
-(id)stateForSubsystem:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)addItem:(id)arg0 withIdentifier:(id)arg1 ;
-(void)addItemWithTitle:(id)arg0 identifier:(id)arg1 block:(id)arg2 ;
-(void)removeItem:(id)arg0 ;
-(void)removeItemWithIdentifier:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCONCRETEPERSISTENTSTORECHANGEHANDLER_H
#define STCONCRETEPERSISTENTSTORECHANGEHANDLER_H

@class NSMutableDictionary, NSPersistentContainer;
@protocol STPersistentStoreChangeHandler;

#import <Foundation/Foundation.h>


@interface STConcretePersistentStoreChangeHandler : NSObject <STPersistentStoreChangeHandler>

 {
    NSObject *_lastPersistentHistoryTokenByStoreIdentifierLock;
}


@property (readonly) NSMutableDictionary *lastPersistentHistoryTokenByStoreIdentifier; // ivar: _lastPersistentHistoryTokenByStoreIdentifier
@property (readonly) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer


-(id)initWithPersistentContainer:(id)arg0 ;
-(id)persistentHistoryTokenForStore:(id)arg0 ;
-(void)handlePersistentStoreCoordinatorStoresDidChange:(id)arg0 ;
-(void)handleRemotePersistentStoreDidChange:(id)arg0 inContext:(id)arg1 ;
-(void)savePersistentHistoryToken:(id)arg0 forStore:(id)arg1 ;


@end


#endif
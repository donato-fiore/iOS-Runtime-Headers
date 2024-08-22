// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFREMOTEBASEBANDLOGGINGMANAGER_H
#define SBFREMOTEBASEBANDLOGGINGMANAGER_H

@class CellularLogging, NSHashTable;

#import <Foundation/Foundation.h>


@interface SBFRemoteBasebandLoggingManager : NSObject

@property (retain, nonatomic) CellularLogging *cellularLogging; // ivar: _cellularLogging
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


+(id)sharedInstance;
-(BOOL)isLogCollectionEnabled;
-(id)init;
-(void)_notifyObservers;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXCHANGEMANAGER_H
#define EXCHANGEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ExchangeManager : NSObject {
    NSMutableDictionary *_exchangesByName;
}




+(id)sharedManager;
-(BOOL)containsExchange:(id)arg0 ;
-(id)exchangeList;
-(id)exchangeWithName:(id)arg0 ;
-(id)exchangeWithName:(id)arg0 createIfNotFound:(BOOL)arg1 ;
-(id)init;
-(void)_addExchange:(id)arg0 ;
-(void)_loadExchangesFromDefaults;
-(void)addExchange:(id)arg0 ;
-(void)reloadExchangesFromDefaults;
-(void)removeExchange:(id)arg0 ;
-(void)saveChanges;


@end


#endif
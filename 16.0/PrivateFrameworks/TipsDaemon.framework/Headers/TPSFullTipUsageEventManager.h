// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSFULLTIPUSAGEEVENTMANAGER_H
#define TPSFULLTIPUSAGEEVENTMANAGER_H


#import <Foundation/Foundation.h>


@interface TPSFullTipUsageEventManager : NSObject {
    ? tipIDToContextualInfoMap;
    ? queue;
    ? initialized;
}




-(id)contextualInfoForIdentifier:(id)arg0 ;
-(id)contextualInfoMap;
-(id)init;
-(void)removeUsageEventCache;
-(void)updateContextualInfoForIdentifiers:(id)arg0 tipsDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 ;


@end


#endif
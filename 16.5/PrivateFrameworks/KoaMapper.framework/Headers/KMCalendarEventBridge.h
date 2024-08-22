// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMCALENDAREVENTBRIDGE_H
#define KMCALENDAREVENTBRIDGE_H

@class KVItemMapper, NSString, EKEventStore;
@protocol KMProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface KMCalendarEventBridge : NSObject <KMProviderDatasetBridge>

 {
    KVItemMapper *_itemMapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)originAppId;


@end


#endif
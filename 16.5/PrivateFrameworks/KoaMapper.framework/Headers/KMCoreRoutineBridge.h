// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMCOREROUTINEBRIDGE_H
#define KMCOREROUTINEBRIDGE_H

@class KVItemMapper, NSString;
@protocol KMProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface KMCoreRoutineBridge : NSObject <KMProviderDatasetBridge>

 {
    KVItemMapper *_itemMapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)_fetchLocationOfInterestBetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)originAppId;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVCOREROUTINEBRIDGE_H
#define CKVCOREROUTINEBRIDGE_H

@class KVItemMapper, NSString;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVCoreRoutineBridge : NSObject <CKVProviderDatasetBridge>

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
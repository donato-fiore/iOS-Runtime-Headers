// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSIMULATEDDATASETBRIDGE_H
#define CKVSIMULATEDDATASETBRIDGE_H

@class KVDataset, NSString;
@protocol KMProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVSimulatedDatasetBridge : NSObject <KMProviderDatasetBridge>

 {
    KVDataset *_dataset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)initWithDataset:(id)arg0 ;
-(id)originAppId;


@end


#endif
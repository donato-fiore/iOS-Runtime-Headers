// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMENFCREADERKEYMODEL_H
#define HMDHOMENFCREADERKEYMODEL_H

@class NSData;


#import "HMDBackingStoreModelObject.h"
#import "HMDHomeNFCReaderKey.h"

@interface HMDHomeNFCReaderKeyModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSData *encodedNfcReaderKey;
@property (copy, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;


+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)properties;


@end


#endif
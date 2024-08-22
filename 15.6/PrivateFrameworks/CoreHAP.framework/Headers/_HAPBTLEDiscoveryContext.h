// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HAPBTLEDISCOVERYCONTEXT_H
#define _HAPBTLEDISCOVERYCONTEXT_H

@class HMFObject, NSMapTable, NSMutableArray;



@interface _HAPBTLEDiscoveryContext : HMFObject

@property (readonly, nonatomic) NSMapTable *characteristicSignatures; // ivar: _characteristicSignatures
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSMutableArray *discoveredAccessoryCharacteriticsPendingRead; // ivar: _discoveredAccessoryCharacteriticsPendingRead
@property (readonly, nonatomic) NSMutableArray *discoveringCharacteristics; // ivar: _discoveringCharacteristics
@property (readonly, nonatomic) NSMutableArray *discoveringDescriptors; // ivar: _discoveringDescriptors
@property (readonly, nonatomic) NSMutableArray *discoveringServices; // ivar: _discoveringServices
@property (readonly, nonatomic) NSInteger discoveryType; // ivar: _discoveryType
@property (readonly, nonatomic) NSMutableArray *readingCharacteristics; // ivar: _readingCharacteristics
@property (readonly, nonatomic) NSMutableArray *readingDescriptors; // ivar: _readingDescriptors
@property (readonly, nonatomic) NSMutableArray *readingSignatureCharacteristics; // ivar: _readingSignatureCharacteristics
@property (readonly, nonatomic) NSMutableArray *readingSignatureServices; // ivar: _readingSignatureServices
@property (nonatomic) NSInteger retries; // ivar: _retries
@property (readonly, nonatomic) NSMapTable *serviceSignatures; // ivar: _serviceSignatures


-(id)init;
-(id)initWithDiscoveryType:(NSInteger)arg0 ;
-(void)reset;


@end


#endif
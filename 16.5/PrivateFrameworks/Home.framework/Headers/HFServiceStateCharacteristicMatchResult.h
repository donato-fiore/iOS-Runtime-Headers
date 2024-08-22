// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSERVICESTATECHARACTERISTICMATCHRESULT_H
#define HFSERVICESTATECHARACTERISTICMATCHRESULT_H

@class NSSet, NSDictionary, NSString;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFServiceStateCharacteristicMatchResult : NSObject <NAIdentifiable>



@property (readonly, copy, nonatomic) NSSet *allCharacteristics; // ivar: _allCharacteristics
@property (readonly, copy, nonatomic) NSDictionary *characteristicsByServiceUUID; // ivar: _characteristicsByServiceUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *services; // ivar: _services
@property (readonly, copy, nonatomic) NSDictionary *servicesByUUID; // ivar: _servicesByUUID
@property (readonly) Class superclass;


+(id)matchResultByMergingResults:(id)arg0 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithServices:(id)arg0 characteristics:(id)arg1 ;
-(id)initWithServices:(id)arg0 characteristicsByServiceUUID:(id)arg1 ;


@end


#endif
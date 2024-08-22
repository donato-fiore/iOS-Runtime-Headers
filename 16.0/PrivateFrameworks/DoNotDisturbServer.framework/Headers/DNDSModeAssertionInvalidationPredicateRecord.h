// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMODEASSERTIONINVALIDATIONPREDICATERECORD_H
#define DNDSMODEASSERTIONINVALIDATIONPREDICATERECORD_H

@class NSArray, NSNumber, NSString;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>


@interface DNDSModeAssertionInvalidationPredicateRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (retain, nonatomic) NSArray *UUIDs; // ivar: _UUIDs
@property (retain, nonatomic) NSArray *clientIdentifiers; // ivar: _clientIdentifiers
@property (retain, nonatomic) NSNumber *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *predicateType; // ivar: _predicateType
@property (readonly) Class superclass;


+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
+(id)recordForInvalidationPredicate:(id)arg0 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif
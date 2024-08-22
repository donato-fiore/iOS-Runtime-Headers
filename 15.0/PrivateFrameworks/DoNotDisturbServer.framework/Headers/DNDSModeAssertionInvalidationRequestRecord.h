// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODEASSERTIONINVALIDATIONREQUESTRECORD_H
#define DNDSMODEASSERTIONINVALIDATIONREQUESTRECORD_H

@class NSString, NSNumber;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>

#import "DNDSModeAssertionInvalidationDetailsRecord.h"
#import "DNDSModeAssertionInvalidationPredicateRecord.h"
#import "DNDSModeAssertionSourceRecord.h"

@interface DNDSModeAssertionInvalidationRequestRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DNDSModeAssertionInvalidationDetailsRecord *details; // ivar: _details
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DNDSModeAssertionInvalidationPredicateRecord *predicate; // ivar: _predicate
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *reasonOverride; // ivar: _reasonOverride
@property (retain, nonatomic) NSNumber *requestDate; // ivar: _requestDate
@property (retain, nonatomic) DNDSModeAssertionSourceRecord *source; // ivar: _source
@property (readonly) Class superclass;


+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
+(id)recordForInvalidationRequest:(id)arg0 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif
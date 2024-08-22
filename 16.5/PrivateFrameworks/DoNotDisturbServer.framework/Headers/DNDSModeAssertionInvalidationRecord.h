// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMODEASSERTIONINVALIDATIONRECORD_H
#define DNDSMODEASSERTIONINVALIDATIONRECORD_H

@class NSString, NSNumber;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>

#import "DNDSModeAssertionRecord.h"
#import "DNDSModeAssertionInvalidationDetailsRecord.h"
#import "DNDSModeAssertionSourceRecord.h"

@interface DNDSModeAssertionInvalidationRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (retain, nonatomic) DNDSModeAssertionRecord *assertion; // ivar: _assertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DNDSModeAssertionInvalidationDetailsRecord *details; // ivar: _details
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *invalidationDate; // ivar: _invalidationDate
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *reasonOverride; // ivar: _reasonOverride
@property (retain, nonatomic) DNDSModeAssertionSourceRecord *source; // ivar: _source
@property (readonly) Class superclass;


+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
+(id)recordForInvalidation:(id)arg0 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif
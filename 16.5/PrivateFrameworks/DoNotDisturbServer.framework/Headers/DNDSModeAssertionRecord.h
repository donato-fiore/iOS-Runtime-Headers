// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMODEASSERTIONRECORD_H
#define DNDSMODEASSERTIONRECORD_H

@class NSString, NSNumber;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>

#import "DNDSModeAssertionDetailsRecord.h"
#import "DNDSModeAssertionSourceRecord.h"

@interface DNDSModeAssertionRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DNDSModeAssertionDetailsRecord *details; // ivar: _details
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DNDSModeAssertionSourceRecord *source; // ivar: _source
@property (retain, nonatomic) NSNumber *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)recordForAssertion:(id)arg0 ;
+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif
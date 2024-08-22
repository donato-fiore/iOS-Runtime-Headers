// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODEASSERTIONSTORERECORD_H
#define DNDSMODEASSERTIONSTORERECORD_H

@class NSArray, NSString;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>


@interface DNDSModeAssertionStoreRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (retain, nonatomic) NSArray *assertions; // ivar: _assertions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invalidationRequests; // ivar: _invalidationRequests
@property (retain, nonatomic) NSArray *invalidations; // ivar: _invalidations
@property (readonly) Class superclass;


+(id)recordForAssertionStore:(id)arg0 ;
+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif
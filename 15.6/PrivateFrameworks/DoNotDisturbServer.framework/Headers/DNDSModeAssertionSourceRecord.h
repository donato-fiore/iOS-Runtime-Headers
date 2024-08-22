// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODEASSERTIONSOURCERECORD_H
#define DNDSMODEASSERTIONSOURCERECORD_H

@class NSString;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>


@interface DNDSModeAssertionSourceRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)recordForAssertionSource:(id)arg0 ;
+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif
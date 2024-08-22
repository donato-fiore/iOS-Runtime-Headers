// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBATTREQUEST_H
#define CBATTREQUEST_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>

#import "CBCentral.h"
#import "CBCharacteristic.h"

@interface CBATTRequest : NSObject

@property (readonly, nonatomic) CBCentral *central; // ivar: _central
@property (retain, nonatomic) CBCharacteristic *characteristic; // ivar: _characteristic
@property (nonatomic) BOOL ignoreResponse; // ivar: _ignoreResponse
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSNumber *transactionID; // ivar: _transactionID
@property (copy) NSData *value; // ivar: _value


-(NSUInteger)endOffset;
-(id)description;
-(id)initWithCentral:(id)arg0 characteristic:(id)arg1 offset:(NSUInteger)arg2 transactionID:(id)arg3 ;
-(void)appendValueData:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKAGENERATEDENCRYPTIONKEY_H
#define SKAGENERATEDENCRYPTIONKEY_H

@class NSDate, MPStatusKitIncomingRatchet, NSData, MPStatusKitOutgoingRatchet;

#import <Foundation/Foundation.h>


@interface SKAGeneratedEncryptionKey : NSObject

@property (readonly, nonatomic) NSDate *dateGenerated; // ivar: _dateGenerated
@property (readonly, nonatomic) MPStatusKitIncomingRatchet *incomingRatchet;
@property (readonly, nonatomic) NSData *originalOutgoingRatchetState; // ivar: _originalOutgoingRatchetState
@property (readonly, nonatomic) MPStatusKitOutgoingRatchet *outgoingRatchet;


+(id)logger;
-(id)initWithCoreDataGeneratedEncryptionKey:(id)arg0 ;
-(id)initWithOriginalOutgoingRatchetState:(id)arg0 dateGenerated:(id)arg1 ;


@end


#endif
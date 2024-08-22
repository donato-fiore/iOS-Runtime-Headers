// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBPROTOBUFSEQUENCENUMBERMANAGER_H
#define BLTPBPROTOBUFSEQUENCENUMBERMANAGER_H

@class NSLock, NSURL, NSUUID, NSString;

#import <Foundation/Foundation.h>

#import "BLTCircularBitBuffer.h"

@interface BLTPBProtobufSequenceNumberManager : NSObject {
    NSUInteger _sendSequenceNumber;
    NSUInteger _recvSequenceNumber;
    NSLock *_sequenceNumberAccess;
    BLTCircularBitBuffer *_duplicateEntries;
    NSURL *_sequenceNumbersURL;
    BOOL _updateSequenceNumbersOnOutOfOrder;
}


@property (readonly, nonatomic) NSUUID *currentSessionIdentifier; // ivar: _currentSessionIdentifier
@property (readonly, nonatomic) NSUUID *recvSessionIdentifier; // ivar: _recvSessionIdentifier
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) NSUInteger sessionState; // ivar: _sessionState


-(BOOL)_isSequenceNumberInOrder:(NSUInteger)arg0 ;
-(BOOL)_writeSequenceNumbersToStore;
-(NSInteger)setRecvSequenceNumber:(NSUInteger)arg0 recvSessionIdentifier:(id)arg1 force:(BOOL)arg2 ;
-(id)_sequenceNumbersURL;
-(id)initWithServiceName:(id)arg0 updateSequenceNumbersOnOutOfOrder:(BOOL)arg1 ;
-(id)initWithServiceName:(id)arg0 updateSequenceNumbersOnOutOfOrder:(BOOL)arg1 duplicateCapacity:(NSUInteger)arg2 ;
-(id)nextSendSequenceNumber;
-(void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(NSUInteger)arg0 ;


@end


#endif